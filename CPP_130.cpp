#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> tri(int n) {
    vector<int> sequence;
    sequence.push_back(3);

    if (n == 0) {
        return sequence;
    }

    sequence.push_back(1 + n / 2);

    if (n == 1) {
        return sequence;
    }

    sequence.push_back(sequence[1] + sequence[0]);

    if (n == 2) {
        return sequence;
    }

    for (int i = 3; i <= n; i++) {
        int nextElement;

        if (i % 2 == 0) {
            nextElement = 1 + i / 2;
        } else {
            nextElement = sequence[i - 1] + sequence[i - 2] + sequence[i + 1];
        }

        sequence.push_back(nextElement);
    }

    return sequence;
}

int main() {
    assert(issame(tri(1), {1, 3}));
    return 0;
}