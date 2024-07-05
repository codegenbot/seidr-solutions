#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

int count_distinct_characters(string str) { 
    unordered_set<char> distinctChars;
    for(char c : str) {
        distinctChars.insert(tolower(c));
    }
    return distinctChars.size();
}

int main() {
    string str;
    getline(cin, str); // To read a line of input
    cout << count_distinct_characters(str) << endl;
    return 0;
}