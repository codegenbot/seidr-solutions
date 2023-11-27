#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers){
    vector<int> temp = numbers;
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    return temp;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));

    cout << "Code is correct." << endl;

    return 0;
}