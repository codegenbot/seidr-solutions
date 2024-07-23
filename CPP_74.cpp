```cpp
#include <algorithm>
#include <string>

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    std::vector<std::string> result;
    
    std::vector<std::string> toLower = std::vector<std::string>(lst1.begin(), lst1.end());
    std::transform(toLower.begin(), toLower.end(), toLower.begin(), ::tolower);

    std::vector<std::string> toUpper = std::vector<std::string>(lst2.begin(), lst2.end());
    std::transform(toUpper.begin(), toUpper.end(), toUpper.begin(), ::toupper);

    std::sort(toLower.begin(), toLower.end());
    std::sort(toUpper.begin(), toUpper.end());

    int i = 0, j = 0;
    
    while (i < toLower.size() && j < toUpper.size()) {
        if (toLower[i] == toUpper[j]) {
            result.push_back(toLower[i]);
            i++;
            j++;
        } else if (toLower[i] < toUpper[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}

int main() {
    std::vector<std::string> vec1 = {"hi", "admin"};
    std::vector<std::string> vec2 = {"hI", "Hi"};

    std::vector<std::string> result = total_match(vec1, vec2);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}