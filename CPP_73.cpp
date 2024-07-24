#include <vector>
#include <string>

int main() {
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

    assert(smallest_change({0, 1}) == 1);
    // Add more test cases here
    return 0;
}