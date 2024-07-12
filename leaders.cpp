#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2, 6};
    vector<int> leadersRes = leaders(arr);
    for (int leader : leadersRes) {
        cout << leader << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int rightmost_max = arr.back();
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= rightmost_max) {
            rightmost_max = arr[i];
            result.push_back(rightmost_max);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}