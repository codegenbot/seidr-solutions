#include <vector>
#include <cassert>

using namespace std;

vector<int> tri(int n) {
    vector<int> sequence;

    if (n >= 0) {
        sequence.push_back(3);

        if (n >= 1) {
            sequence.push_back(1 + n / 2);

            for (int i = 2; i <= n; i++) {
                if (i % 2 == 0) {
                    sequence.push_back(1 + i / 2);
                } else {
                    sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]);
                }
            }
        }
    }

    return sequence;
}

bool isSame(const vector<int>& a,const vector<int>& b) {
    return a == b;
}

int main() {
    assert(isSame(tri(1) , {1, 3}));
    assert(isSame(tri(2) , {1, 3, 2}));
    assert(isSame(tri(3) , {1, 3, 2, 5}));
    assert(isSame(tri(4) , {1, 3, 2, 5, 4}));
    assert(isSame(tri(5) , {1, 3, 2, 5, 4, 7}));

    return 0;
}