```cpp
#include <iostream>
#include <string>

int how_many_times(string s, string sub);

int main() {
    string s, sub;
    cin >> s >> sub; 
    cout << how_many_times(s, sub);
}

int how_many_times(string s, string sub) {
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find(sub)) != string::npos) {
        ++count;
        s = s.substr(0, pos) + s.substr(pos + sub.length());
    }
    return count;
}