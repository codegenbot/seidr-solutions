```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> result;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"},
                                      {4, "Four"}, {5, "Five"}, {6, "Six"},
                                      {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            vector<string> temp;
            for (int i = 0; i < num; i++) {
                temp.push_back(numberNames[i+1]);
            }
            result.push_back(temp[0]);
        }
    }

    return result;
}