```
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

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < target.size() && text[i + j] == target[j]) {
                ++j;
            }
            if (j == target.size()) {
                result.push_back(i);
            }
        }
    }
    return result;
}
```
You can also use the `std::string` class to find the indices of a substring in a string, like this:
```
#include <string>

int main() {
    std::string text = "hello world";
    std::string target = "world";
    int index = text.find(target);
    if (index != std::string::npos) {
        std::cout << "Found at index: " << index << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
}
```