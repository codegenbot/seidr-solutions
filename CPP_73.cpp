```cpp
#include <vector>
#include <string>

int main() {
    int n;
    std::vector<int> arr;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        arr.push_back(x);
    }
    int changes = smallest_change(arr);
    std::cout << "Smallest change: " << changes << std::endl;
    return 0;
}

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            changes++;
            left++;
        } else {
            left++;
            right--;
        }
    }
    return changes;
}