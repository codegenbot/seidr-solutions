#include <iostream>
#include <vector>
#include <algorithm>

string borrowed(int n) {
    string s = to_string(n);
    while (s.size() % 4 != 0) {
        s = "0" + s;
    }
    return s;
}

int count_borrowed(int n) {
    string s = borrowed(n);
    int count = 0;
    for (char c : s) {
        if (c == '1') {
            count++;
        }
    }
    return count;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count_borrowed(a) != count_borrowed(b)) {
            return count_borrowed(a) < count_borrowed(b);
        }
        return a < b;
    });
    return arr;
}

int main() {
    vector<int> result = sort_array({2,4,8,16,32});
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}