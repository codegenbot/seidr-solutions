#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    auto pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        pos += substring.length();
    }
    return count;
}

cin >> s >> sub;
cout << how_many_times(s, sub);