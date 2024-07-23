#include <iostream>
#include <vector>

// declare filter_integers function here
std::vector<int> filter_integers(std::vector<std::string> v) {
    std::vector<int> result;
    for (auto s : v) {
        int num;
        if (sscanf(s.c_str(), "%d", &num) == 1) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> input;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> s;
        input.push_back(s);
    }
    
    std::vector<int> filtered_integers = filter_integers(input);
    
    bool result = issame(filtered_integers, filtered_integers);
    if(result) {
        std::cout << "The two vectors are same" << std::endl;
    } else {
        std::cout << "The two vectors are not same" << std::endl;
    }
    return 0;