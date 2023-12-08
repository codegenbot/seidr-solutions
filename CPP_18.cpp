#include <iostream>
#include <string>

using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    for (int i = 0; i < str.length() - substring.length() + 1; i++) {
        if (str.substr(i, substring.length()) == substring) {
            count++;
        }
    }
    return count;
}