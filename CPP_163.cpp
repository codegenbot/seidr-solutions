#include <vector>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }
    return result;
}

int main() {
    assert(generate_integers(17, 89) == vector<int>());
    assert(generate_integers(0, 100) == vector<int>{0, 2, 4, 6, 8});
    assert(generate_integers(10, 20) == vector<int>{0, 2, 4, 6, 8});
    assert(generate_integers(1, 1) == vector<int>());
    assert(generate_integers(222, 222) == vector<int>{2, 2, 2});
    return 0;
}