```cpp
#include <iostream>
#include <string>

int main() {
    string s = "Hello World Hello";
    string sub = "Hello";  
    cout << how_many_times(s, sub);  
    return 0;
}

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(pos, substring.length());
    }
    return count;
}