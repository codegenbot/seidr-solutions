```cpp
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
    return result[0] << 16 | result[1];
}

int main() {
    assert(issame(std::vector<int>{16, 1}, get_even_odd(145)) == true); 
    return 0;
}