#include <iostream>
#include <vector>
using namespace std;

vector<int> intersperse(vector<int> numbers, int delimeter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        if (i > 0) {
            result.push_back(delimeter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}
```
To use a raw string literal, you can enclose the string in parentheses and prefix it with an "R" character. For example:
```
string s = R"(This is a multi-line string.
It has line breaks.
And it uses a raw string literal.)";
```
Note that the closing parenthesis must be on its own line, just like in your original code. Also note that this syntax is only available in C++11 and later versions of the language..