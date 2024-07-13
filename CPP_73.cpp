Here is the completed code:

```cpp
int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int count = 0;
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            count++;
            if (left == 0) {
                right--;
            } else if (right == s.length() - 1) {
                left++;
            } else {
                count = min(count + 2, 1);
                break;
            }
        } else {
            left++;
            right--;
        }
    }
    return count;
}