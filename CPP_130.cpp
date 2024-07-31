#include <vector>
#include <cassert>

using namespace std;

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> input1 = {4, 5, 6};
    vector<int> input2 = {4, 5, 6};

    assert(areEqual(input1, input2));

    return 0;
}