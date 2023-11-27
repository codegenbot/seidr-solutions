#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int count_distinct_characters(string str);

int main() {
    cout << count_distinct_characters("Jerry jERRY JeRRRY") << endl;
    return 0;
}

int count_distinct_characters(string str) {
    vector<char> distinctChars;
    for (char c : str) {
        char lowerC = tolower(c);
        if (find(distinctChars.begin(), distinctChars.end(), lowerC) == distinctChars.end()) {
            distinctChars.push_back(lowerC);
        }
    }
    return distinctChars.size();
}