#include <vector>

vector<int> tri(int n) {
    vector<int> sequence;
    sequence.push_back(3); // First element is always 3

    if (n == 0) {
        return sequence;
    }

    sequence.push_back(1 + n / 2); // Second element

    if (n == 1) {
        return sequence;
    }

    sequence.push_back(sequence[1] + sequence[0]); // Third element

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) {
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]);
        }
    }

    return sequence;
}