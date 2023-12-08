#include <iostream>
#include <vector>

using namespace std;

vector<int> cutVector(vector<int> v) {
    // ...
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto result = cutVector(v);
    cout << "The two resulting subvectors are: ";
    for (auto x : result) {
        cout << x << ", ";
    }
    return 0;
}