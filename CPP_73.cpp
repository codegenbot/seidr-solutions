#include <vector>
#include <string>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int res = 0;
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            res++;
            left++;
            right--;
        } else {
            left++;
            right--;
        }
    }
    return res;
}