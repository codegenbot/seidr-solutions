#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> tri_sequence(int n) {
    vector<int> sequence;

    if (n == 0) {
        sequence.push_back(0);
        return sequence;
    }

    sequence.push_back(3);

    if (n == 1) {
        return sequence;
    }

    sequence.push_back(1);

    int i = 2;
    while (i <= n) {
        if (i % 2 == 0) {
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
        }
        i++;
    }

    return sequence;
}

int main() {
    assert (issame(tri_sequence(1) , {1, 3}));
    // add more test cases here

    return 0;
}