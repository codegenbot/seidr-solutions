
Here is the modified code that includes the necessary header file and resolves the error:
```c++
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