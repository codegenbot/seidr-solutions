#include <vector>
#include <string>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int left = 0, right = n - 1;
    int count = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            count++;
            if (s[left] == s[right-1]) {
                right--;
            } else {
                left++;
            }
        } else {
            left++;
            right--;
        }
    }
    return count;
}

int main() {
    assert (smallest_change({0, 1}) == 1);
    return 0;
}