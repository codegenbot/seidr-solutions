#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int even_odd_count(int num) {
    std::vector<int> result({0, 0});
    int temp = abs(num);
    while(temp != 0){
        int digit = temp % 10;
        if(digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        temp /= 10;
    }
    return std::vector<int>(result.begin(), result.end());
}

int main() {
    assert(issame(get_even_odd(0), std::vector<int>{0, 1})); 
    return 0;
}