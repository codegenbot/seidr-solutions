#include <vector>
#include <string>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            if (str[left] == '0') {
                right--;
            } else {
                left++;
            }
        } else {
            left++;
            right--;
        }
    }
    return changes;
}

int main() {
    vector<int> input = {0, 1};
    assert(smallest_change(input) == 1);
    return 0;
}