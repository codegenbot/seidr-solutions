#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    // Test case 1
    assert(derivative({1}) == vector<float>{});

    // Add more test cases here
    assert(derivative({1, 2, 3}) == vector<float>{2, 6});
    assert(derivative({3, 5, 7, 9}) == vector<float>{5, 14, 27});
    
    cout << "All test cases pass." << endl;

    return 0;
}