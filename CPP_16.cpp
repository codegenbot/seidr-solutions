#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

int main() {
    int result = count_distinct_characters("Jerry jERRY JeRRRY");
    cout << result << endl;
    return 0;
}