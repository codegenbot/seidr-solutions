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
    while (s.find(sub) != string::npos) {
        ++count;
        size_t found = s.find(sub);
        if (found != string::npos)
            s = s.substr(found + sub.length());
    }
    return count;
}