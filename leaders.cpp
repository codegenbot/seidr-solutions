#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int max_right = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= max_right) {
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {17, 11, 13, 2, 3, 7, 15};
    vector<int> leadersVector = leaders(arr);
    for(int i : leadersVector) {
        cout << i << " ";
    }
    return 0;
}