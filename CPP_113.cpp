#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> odd_count(const std::vector<std::string>& lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (int j = 0; j < lst[i].size(); j++) {
            if ((lst[i][j] - '0') % 2 != 0) {
                count++;
            }
        }
        std::string str = "the number of odd elements " + std::to_string(count) + " in the string " + std::to_string(i) + " of the input.";
        result.push_back(str);
    }
    return result;
}

int main() {
    assert(odd_count({"271", "137", "314"}) == std::vector<std::string>{
        "the number of odd elements 2 in the string 0 of the input.",
        "the number of odd elements 2 in the string 1 of the input.",
        "the number of odd elements 3 in the string 2 of the input."
    });

    std::cout << "Test case passed!" << std::endl;

    return 0;
}