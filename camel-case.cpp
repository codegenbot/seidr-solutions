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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
*/
string camelCaseString(string str) {
    string result = "";
    vector<string> arr;
    int i = 0;
    int j = 0;
    while (i < str.size()) {
        if (str[i] == '-') {
            arr.push_back(str.substr(j, i-j));
            j = i+1;
        }
        i++;
    }
    if (j < str.size()){
        arr.push_back(str.substr(j, str.size()-j));
    }
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i][0] >= 'a' && arr[i][0] <= 'z') {
            arr[i][0] = toupper(arr[i][0]);
        }
        result = result + arr[i];
    }
    return result;
}
int main() {
    string str;
    getline(cin, str);
    cout << camelCaseString(str) << endl;
    return 0;
}
