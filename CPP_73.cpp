Here is the completed code:

```cpp
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
            if (str[left] == str[right-1])
                right--;
            else if (str[right] == str[left+1])
                left++;
            else {
                changes += 2;
                left++;
                right--;
            }
        } else
            left++, right--;
    }
    return changes;
}