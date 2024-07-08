```cpp
int smallest_change(std::vector<int> arr) {
    std::string s = "";
    for (int i : arr) {
        s += "01"[i]; 
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