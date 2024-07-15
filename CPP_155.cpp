#include <vector>
#include <string>
using namespace std;

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

int main() {
    std::vector<int> result = even_odd_count(123456);
    return 0;
}