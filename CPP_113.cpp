#include <cassert>
#include <initializer_list>

int odd_count(const std::initializer_list<int>& numbers){
    int count = 0;
    for (int num : numbers) {
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 != 0) {
                count++;
            }
            num /= 10;
        }
    }
    return count;
}

bool issame(int result, const std::initializer_list<int>& expected_output){
    return result == *expected_output.begin() && expected_output.size() == 1;
}

int main() {
    assert(issame(odd_count({271, 137, 314}), {4}));
    return 0;
}