#include <vector>
#include <string>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int count = 0;
    for(int i = 0; i < n/2; i++) {
        if(s[i] != s[n-i-1]) {
            count++;
        }
    }
    return count;
}

int main() {
    assert (smallest_change({0, 1}) == 1);
    return 0;
}