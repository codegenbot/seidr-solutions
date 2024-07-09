#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> issame(const std::vector<std::string>& v) {
    // your implementation here...
}

int main() 
{
    int n; 
    std::cin >> n;
    
    std::vector<std::string> lst;
    
    for(int i = 0; i < n; i++) {
        std::cin >> lst.push_back(std::string);
    }
    
    std::vector<std::string> result = issame(lst);
    
    std::cout << "Sorted List Sum: ";
    for(auto str : result) {
        std::cout << str << " ";
    }
    std::cout << endl;
    
    return 0;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    // your implementation here...
}