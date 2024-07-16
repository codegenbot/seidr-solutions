#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    int maxRight = arr[n - 1];
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            res.push_back(maxRight);
        }
    }
    reverse(res.begin(), res.end());
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