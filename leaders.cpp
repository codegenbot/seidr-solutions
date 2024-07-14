#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0) return result;
    
    int rightmost = arr[n-1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            result.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 3, 2, 5};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}