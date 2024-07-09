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
    bool swapped;
    do {
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
    } while (swapped);
    return changes;
}

int main() {
    int smallestChanges = smallest_change({5, 6, 3, 4});
    return 0;
}