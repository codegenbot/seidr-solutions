#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
You are given a string of words separated by spaces. Each word consists only of lowercase letters.

Consider each pair of adjacent words and find the character that is common to both words. Then, repeat this process for each pair of adjacent words in the string, and eventually you will have one large string consisting of only one word.

Return this final string.

Example

For words = "one two three", the output should be
stringConstruction(words) = "onetwothree".

The common characters for pairs of adjacent words are as follows:

'o' is common between 'one' and 'two';
'n' is common between 'one' and 'three';
'e' is common between 'two' and 'three'.
Therefore, the final string that you return should be "onetwothree".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string words

A string consisting of lowercase English letters and spaces.

Guaranteed constraints:
1 ≤ words.length ≤ 105.

[output] string

The final string obtained after the operations.
*/
int main() {
    string s;
    getline(cin, s);
    vector<string> words;
    string temp = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ' ') temp += s[i];
        if (s[i] == ' ' || i == s.length() - 1) {
            words.push_back(temp);
            temp = "";
        }
    }
    cout << result << endl;
    return 0;
}
