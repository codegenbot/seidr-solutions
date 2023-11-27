#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // function logic
}

vector<int> tri(int n) {
    vector<int> sequence;
    sequence.push_back(3);

    if(n == 0) {
        return sequence;
    }

    sequence.push_back(1);

    if(n == 1) {
        return sequence;
    }

    sequence.push_back(2);

    if(n == 2) {
        return sequence;
    }

    int i = 3;
    while(i <= n) {
        if(i % 2 == 0) {
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
        }
        i++;
    }

    return sequence;
}