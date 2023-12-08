
Here's the modified code that returns a vector of integers:
```
#include <string>
#include <vector>

std::vector<int> findIndices(std::string text, std::string target) {
    int count = 0;
    std::vector<int> indices;
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
The only modification made was to change the return type of the function from `int` to `std::vector<int>`.