#include <cassert>
#include <vector>

std::vector<int> get_even_odd(int num) {
    std::vector<int> result(2);
    int temp = abs(num);
    while(temp != 0){
        int digit = temp % 10;
        if(digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        temp /= 10;
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2);
    int temp = abs(num);
    while(temp != 0){
        int digit = temp % 10;
        if(digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        temp /= 10;
    }
    return result;

}

int main() {
    assert(issame(even_odd_count(0), std::vector<int>{1, 0}));
    return 0;
}