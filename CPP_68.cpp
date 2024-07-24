#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    if (arr.empty()) return vector<pair<int, int>>();

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back({minEven, minIndex});
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    std::vector<pair<int, int>> output = pluck(arr);

    for (const auto& pair : output) {
        cout << "Pair: (" << pair.first << ", " << pair.second << ")" << endl;
    }
}