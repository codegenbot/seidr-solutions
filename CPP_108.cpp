#include <iostream>
#include <vector>
#include <string>

int count_nums(std::vector<std::string> numbers) {
    int even_count = 0;
    for (const auto& num : numbers) {
        if (stoi(num) % 2 == 0)
            even_count++;
    }
    return even_count;
}

int main() { 
    std::vector<std::string> numbers; 
    int n; 
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string num; 
        cin >> num; 
        numbers.push_back(num);
    }
    
    return count_nums(numbers);
}