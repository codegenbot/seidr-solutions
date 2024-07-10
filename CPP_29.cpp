#include <initializer_list>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<std::string> filterByPrefix(const std::vector<std::string>& vec, const std::string& prefix) {
    return {str for str in vec if str.find(prefix) == 0};
}

int main_function() {
    std::vector<std::string> vector1 = {"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"};
    std::vector<std::string> vector2 = filterByPrefix(vector1, "xxx");
    
    if (isSame(vector1, vector2)) {
        return 0;
    } else {
        return -1; 
    }
}