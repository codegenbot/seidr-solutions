```cpp
#include <string>

int count_upper(string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'A' && s[i] <= 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int result = count_upper(str);
    cout << "Number of uppercase letters at even positions: " << result << endl;
    return 0;
}