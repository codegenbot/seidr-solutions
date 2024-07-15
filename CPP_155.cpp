#include <vector>
#include <string>
#include <iostream>

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

int main() {
    int num = 123456;
    std::vector<int> counts = even_odd_count(num);
    for (int count : counts) {
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}