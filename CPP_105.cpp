#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> result;
    std::map<int, std::string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            result.push_back(num_to_name[num]);
        }
    }

    std::sort(result.begin(), result.end());
    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    std::vector<int> input = {5, 2, 7, 1, 9};
    std::vector<std::string> expected_output = {"Nine", "Seven", "Five", "Two", "One"};
    
    std::vector<std::string> result = by_length(input);
    
    assert(issame(result, expected_output));

    return 0;
}