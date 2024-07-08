#include <vector>
#include <string>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::string s = "";
    for (int i : arr) {
        s += std::to_string(i);
    }
    int left = 0, right = s.length() - 1;
    int changes = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            changes++;
            left++;
            right--;
        } else {
            left++;
            right--;
        }
    }
    return changes;
}

int main() {
    std::vector<int> arr = {0, 1};
    int result = smallest_change(arr);
    return 0;
}