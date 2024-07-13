#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 23, 35, 26, 25, 1, 30};
    vector<int> result = leaders(arr);
    // Print the result or use it as needed
    return 0;
}