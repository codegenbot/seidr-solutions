#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string>, vector<string>);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result; 
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        string tempStr;
        for (int j = 0; j < lst[i].length(); j++) {
            if (std::stoi(std::string(1, lst[i][j])) % 2 != 0) {
                count++;
            }
        }
        tempStr = std::to_string(count) + " is the number of odd elements in string " + std::to_string(i+1);
        result.push_back(tempStr);
    }
    return result;
}

int main() {
    vector<string> test = {"271", "137", "314"};
    if (issame(odd_count(test), {"2 is the number of odd elements in string 1", "1 is the number of odd elements in string 2", "0 is the number of odd elements in string 3"})) {
        std::cout << "Test passed.\n";
    } else {
        std::cout << "Test failed.\n";
    }
    return 0;
}