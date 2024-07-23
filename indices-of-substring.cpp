Here is the modified code:

```cpp
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int last = -1;
    while ((last = text.find(target, last + 1)) != std::string::npos) {
        indices.push_back(last);
        last += target.size();
    }
    return indices;
}

int main() {
    // Read input from user
    std::string text;
    cin >> text;

    std::string target;
    int t;
    cin >> t;
    getline(cin, target);

    // Call the function and print the result
    std::vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}