#include <iostream>
#include <string>
#include <vector>

bool issame(std::vector<std::string> expected, int actual) {
    for(int i = 0; i < expected.size(); i++) {
        if(actual != std::stoi(expected[i])) 
            return false;
    }
    return true;
}

int odd_count(std::vector<std::string> str_vec) {
    int count = 0;
    for (const auto& s : str_vec) {
        if (std::stoi(s) % 2 != 0)
            count++;
    }
    return count;
}

int main(int argc, char const *argv[]) {
    std::vector<std::string> input = {"271", "137", "314"};
    int result = odd_count(input);
    assert(result == 2); 
    return 0;
}