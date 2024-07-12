#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}

int main() {
    assert(even_odd_count(0) == {1, 0});
    return 0;
}