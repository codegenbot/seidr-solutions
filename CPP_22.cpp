#include <vector>
#include <list>
#include <iostream>

using namespace std;

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for (auto& value : values) {
        result.push_back(static_cast<int>(value));
    }
    return result;
}

int main() {
    for (int num : filter_integers({3, 'c', 3, 3, 'a', 'b'})) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}