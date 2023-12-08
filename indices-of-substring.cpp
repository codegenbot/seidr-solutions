```
#include <string>

int findIndices(string text, string target) {
    int count = 0;
    vector<int> indices;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == target[count]) {
            count++;
            if (count == target.length()) {
                indices.push_back(i - count + 1);
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    return indices;
}
```
The code uses `std::string` class which is not compatible with C++11's move semantics. To fix this error, you can use `std::basic_string` instead of `std::string`.