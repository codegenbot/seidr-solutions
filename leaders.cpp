#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int max_right = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> output = leaders(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}