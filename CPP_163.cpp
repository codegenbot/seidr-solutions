#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    int a;
    int b;
    cin >> a >> b;
    
    vector<int> result = generate_integers(a, b);

    return 0;
}