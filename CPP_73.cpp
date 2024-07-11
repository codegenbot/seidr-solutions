```cpp
int smallest_change(vector<int> arr) {
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int n = str.length();
    int ans = 0;
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            ans++;
        }
    }
    return ans;
}