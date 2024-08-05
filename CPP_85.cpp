#include <vector>
#include <cassert>

int add(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}

struct Solver {
    void solve() {
        assert(add({4, 4, 6, 8}) == 12);
    }
};

int main() {
    Solver solver;
    solver.solve();

    return 0;
}