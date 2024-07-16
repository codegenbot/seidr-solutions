#include <vector>
#include <iostream>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        result.push_back(i);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    
    // Additional test cases
    // assert(issame(generate_integers(1, 5), {1, 2, 3, 4, 5}));
    // assert(!issame(generate_integers(1, 5), {1, 3, 5}));
    
    cout << "All test cases pass!" << endl;
    
    return 0;
}