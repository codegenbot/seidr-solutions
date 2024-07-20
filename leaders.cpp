#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int last_index = n-1;
    result.push_back(arr[last_index]);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[last_index]) {
            result.push_back(arr[i]);
            last_index = i;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 3, 7, 1, 6};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}