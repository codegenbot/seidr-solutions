#include <vector>
using namespace std;

int main() {
    vector<int> arr = {12, 10, 8, 6}; // Replace with your input
    vector<int> leaders;
    int max_right = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    leaders.push_back(arr.back());
    // Print or use the result as needed
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}