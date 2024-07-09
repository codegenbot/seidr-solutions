#include <string>

int how_many_times(std::string s1, std::string s2) {
    int count = 0;
    size_t pos = 0;
    while ((pos = s1.find(s2, pos)) != std::string::npos) {
        ++count;
        pos += s2.size();
    }
    return count;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;
    int result = how_many_times(str1, str2);
    std::cout << "The substring appears " << result << " times." << std::endl;
    return 0;
}