#include <vector>

std::vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    while(num != 0) {
        if(num % 2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }
    return {even, odd};
}

int main() {
    assert_equal(even_odd_count(0), std::vector<int>{1, 0});
    assert_equal(even_odd_count(123456), std::vector<int>{3, 3});
    assert_equal(even_odd_count(-87654), std::vector<int>{2, 3});
    return 0;
}