#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int count_distinct_characters(string str) {
    vector<char> distinctChars;
    for (auto c : str) {
        if (find(distinctChars.begin(), distinctChars.end(), tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(tolower(c));
        }
    }
    return distinctChars.size();
}
int main() {
    string str = "xyzXYZ";
    cout << count_distinct_characters(str) << endl;
    return 0;
}