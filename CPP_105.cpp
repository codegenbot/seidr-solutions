#include <vector>
#include <algorithm>
#include <string>
#include <map>

std::vector<std::string> by_length(std::vector<int> arr);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // implementation goes here
}

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }
    std::sort(filtered.begin(), filtered.end());
    std::reverse(filtered.begin(), filtered.end());

    std::map<int, std::string> numToString = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    std::vector<std::string> result;
    for (int num : filtered) {
        result.push_back(numToString[num]);
    }

    return result;
}

int main() {
    // main function code
}