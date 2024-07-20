#include <iostream>
#include <string>
using namespace std;

int is_bored(string S) {
    int boredomCount = 0;
    size_t start = 0;
    while (start < S.size()) {
        start = S.find("I", start);
        if (start == string::npos)
            break;
        size_t end = S.find(['.', '?', '!']);
        if (end == string::npos) end = S.size();
        if (S.substr(start, end - start).find(' ') != string::npos)
            boredomCount++;
        start = end + 1;
    }
    return boredomCount;
}

int main() {
    string S;
    cin >> S;
    cout << is_bored(S) << endl;
    return 0;
}