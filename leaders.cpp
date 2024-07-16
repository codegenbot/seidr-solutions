#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    int max_right = arr[n - 1];
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return res;
}

int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2};
    vector<int> leadersV = leaders(v);
    for(int i : leadersV) {
        cout << i << " ";
    }
    return 0;
}