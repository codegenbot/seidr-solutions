#include <algorithm>
#include <cassert>
#include <string>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    auto it = unique(str.begin(), str.end());
    return distance(str.begin(), it);
}

int main() {
    std::string input;
    std::cin >> input;
    
    int result = count_distinct_characters(input);
    std::cout << result;
    
    return 0;
}