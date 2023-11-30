#include <iostream>
#include <vector>

using namespace std;

vector<int> tri(int n) {
    vector<int> sequence;
    sequence.push_back(3); // First element of the sequence is always 3

    if (n == 0) {
        return sequence;
    }

    sequence.push_back(1); // Second element of the sequence is always 1

    if (n == 1) {
        return sequence;
    }

    sequence.push_back(2); // Third element of the sequence is always 2

    if (n == 2) {
        return sequence;
    }

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) {
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
        }
    }

    return sequence;
}