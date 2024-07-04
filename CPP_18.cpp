#include <iostream>
#include <string>
using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = str.find(substring);
    while (pos != string::npos) {
        count++;
        pos = str.find(substring, pos + substring.length());
    }
    return count;
}

int main() {
    string str, substring;
    cin >> str >> substring;
    cout << how_many_times(str, substring) << endl;
    return 0;
}