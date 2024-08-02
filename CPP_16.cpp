#include <algorithm>
#include <cassert>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    return str.size();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    int result = count_distinct_characters(input);
    std::cout << "Number of distinct characters: " << result << std::endl;
    return 0;
}