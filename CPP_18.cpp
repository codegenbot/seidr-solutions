#include<stdio.h>
#include<string>
using namespace std;
int how_many_times(string str, string substring) {
    if (substring.empty()) return 0;
    int count = 0;
    for (size_t pos = str.find(substring); pos != string::npos; pos = str.find(substring, pos + 1)) {
        count++;
    }
    return count;
}