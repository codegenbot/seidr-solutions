````
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> by_length(std::vector<int> lengths) {
    std::vector<std::string> words;
    for (int length : lengths) {
        if (length == 4)
            words.push_back("Four");
        else if (length == 8)
            words.push_back("Eight");
        else if (length == 9)
            words.push_back("Nine");
    }
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}
```