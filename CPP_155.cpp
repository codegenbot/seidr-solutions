#include <vector>

std::vector<int> even_odd_count(int num);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

#include <iostream>
int main() {
    int num;
    std::cin >> num;
    
    std::vector<int> result = even_odd_count(num);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}

std::vector<int> even_odd_count(int num){
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}