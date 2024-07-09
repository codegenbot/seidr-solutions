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
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = left; i < right; ++i) {
            if (s[i] != s[s.length() - 1 - i]) {
                std::swap(s[left], s[right]);
                changes++;
                swapped = true;
                break;
            }
        }
        left++;
        right--;
    }
    return changes;
}