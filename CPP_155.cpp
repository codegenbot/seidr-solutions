#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int num);
bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    std::vector<int> even_odd_count(int num);
    std::vector<int> result = even_odd_count(123456789);
    assert(issame(result, {4, 5}));
    return 0;
}

std::vector<int> even_odd_count(int num){
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char digit : numStr) {
        if ((digit - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}