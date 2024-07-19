#include <vector>
#include <cassert>

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(generate_integers(17, 89) == vector<int>{});
  
    return 0;
}