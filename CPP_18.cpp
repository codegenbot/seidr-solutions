#include <iostream>
#include <string>

using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    for (size_t i = 0; i < str.length(); i++) {
        if (str.substr(i, substring.length()) == substring) {
            count++;
        }
    }
    return count;
}

int main() {
    string str, substring;
    cin >> str >> substring;
    cout << how_many_times(str, substring) << endl;
    return 0;
}