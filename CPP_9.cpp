#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    assert(rolling_max(vector<int>{3, 2, 3, 100, 3}) == vector<int>{3, 3, 3, 100, 100});
    return 0;
}