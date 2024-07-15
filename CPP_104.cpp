#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> unique_digits(const std::vector<int>& x){
    std::vector<int> result;
    for (int num : x) {
        std::string numStr = std::to_string(num);
        for (char digit : numStr) {
            int d = digit - '0';
            if (std::find(result.begin(), result.end(), d) == result.end()) {
                result.push_back(d);
            }
        }
    }
    return result;
}