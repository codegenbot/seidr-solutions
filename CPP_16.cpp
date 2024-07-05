#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int count_distinct_characters(string str){ 
    unordered_set<char> distinctChars;
    for(char c : str) {
        distinctChars.insert(tolower(c));
    }
    return distinctChars.size();
}

int main() {
    string input;
    getline(cin, input);
    cout << count_distinct_characters(input) << endl;
    return 0;
}