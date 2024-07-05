#include<stdio.h>
#include<string>
using namespace std;

int how_many_times(string str, string substring) {
    if (substring.empty()) return 0;

    int count = 0;
    for (size_t i = 0; i <= str.size() - substring.size(); ++i) {
        if (str.substr(i, substring.size()) == substring) {
            ++count;
        }
    }
    return count;
}