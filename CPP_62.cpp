#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(derivative({1}) == vector<float>{});
    assert(derivative({1, 2, 3}) == vector<float>{2, 6});
    cout << "All test cases passed!" << endl;
    return 0;
}