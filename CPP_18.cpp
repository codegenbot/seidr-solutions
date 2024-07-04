#include <iostream>
#include <string>
using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = str.find(substring);
    while (pos != string::npos) {
        count++;
        pos = str.find(substring, pos + 1);
    }
    return count;
}

int main() {
    // Test cases
    cout << (how_many_times("john doe", "john") == 1) << endl;
    cout << (how_many_times("abababab", "ab") == 4) << endl;
    cout << (how_many_times("mississippi", "iss") == 2) << endl;
    return 0;
}