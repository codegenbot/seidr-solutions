#include <vector>
#include <string>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int count = 0;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
            i++;
        }
    }
    return count;
}

int main() {
    assert (smallest_change({0, 1}) == 1);
    return 0;
}