```cpp
#include <string>

int main() {
    string s;
    cin >> s;
    int count = count_upper(s);
    cout << count << endl;
    return 0;
}

int count_upper(string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'A' && s[i] <= 'U')) {
            count++;
        }
    }
    return count;
}