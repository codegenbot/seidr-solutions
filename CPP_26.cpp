#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(const vector<int>& numbers){
    vector<int> result = numbers;
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));

    cout << "Code is correct." << endl;

    return 0;
}