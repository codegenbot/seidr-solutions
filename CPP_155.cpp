#include <vector>
#include <algorithm>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    int num = 12345;
    std::vector<int> expected = even_odd_count(num);
    assert(issame(even_odd_count(num), expected));
    // Other code...
}