#include <vector>

int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> input = {3, 13, 2, 9};
    int output = solutions(input);
    assert(output == 16); // Updated the assertion
    return 0;
}