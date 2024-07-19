#include <vector>

bool issame(vector<int> a, vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

issame({10}, {10, 10});