#include <map>

bool issame(const std::map<char, int>& m1, const std::map<char, int>& m2) {
    return m1 == m2;
}

std::map<char,int> histogram(std::string test);

int main() {
    std::string test = "hello world";
    std::map<char, int> result = histogram(test);
    for (const auto& pair : result) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}

std::map<char,int> histogram(std::string test){
    std::map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    std::map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : counts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}