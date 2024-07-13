#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2}; // example input
    vector<int> result = leaders(arr);
    for (int i : result) cout << i << endl;
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int last = arr[arr.size() - 1];
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= last) {
            result.push_back(arr[i]);
            last = arr[i];
        }
    }
    return result;
}