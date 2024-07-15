#include <iostream>
#include <vector>
#include <cassert>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_count(int num);

int main() {
    // Test the even_odd_count function
    std::vector<int> input = {12345, 2468, 13579};
    for(int num : input){
        std::vector<int> count = even_odd_count(num);
        std::cout << "Number: " << num << " | Even Count: " << count[0] << " | Odd Count: " << count[1] << std::endl;
    }

    // Test the issame function
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    std::cout << "Are vectors a and b same? " << (issame(a, b) ? "Yes" : "No") << std::endl;

    return 0;
}

std::vector<int> even_odd_count(int num){
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}