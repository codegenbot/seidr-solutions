#include <vector>
#include <iostream>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {})); 
    cout << "Hello World!" << endl; 
    return 0;
}