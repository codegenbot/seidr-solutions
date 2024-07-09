#include <vector>
#include <string>

int main() {
    int n;
    std::cout << "Enter number of integers: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter integer " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int changes = 0;
    std::string s = "";
    for (int i : arr) {
        s += std::to_string(i);
    }
    int left = 0, right = s.length() - 1;
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