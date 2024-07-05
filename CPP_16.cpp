#include <iostream>
#include <string>
#include <set>
using namespace std;

int count_distinct_characters(string str){
    set<char> distinct_chars;
    for(char c : str) {
        distinct_chars.insert(tolower(c));
    }
    return distinct_chars.size();
}

int main() {
    string str;
    getline(cin, str);
    cout << count_distinct_characters(str) << endl;
    return 0;
}