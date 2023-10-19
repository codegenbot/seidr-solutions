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
int main() {
#ifdef CMD2
    CMD2
#endif

    vector<int> inputs;
    int n;
    int index = 0;
    int result = INT_MIN;
    cin >> n;
    inputs.resize(n);
    for (auto &input : inputs) {
        cin >> input;
    }
    for (auto &in : inputs) {
        if (in < 0) {
            index++;
        }
    }
    if (index == n) {
        result = INT_MIN;
    } else {
        for (int i = 0; i < n; ++i) {
//            cout << "i:" << i << ", result:" << result << endl;
            int cur = 1;
            for (int j = i; j < n; ++j) {
                result = max(result, cur * inputs[j]);
                cur *= inputs[j];
            }
        }
    }
    cout << result << "\n";


    return 0;
}
