#include <iostream>
#include <vector>

using namespace std;

vector<int> incr_list(const vector<int>& l);

bool issame(const vector<int>& a, const vector<int>& b);

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (int i = 0; i < result.size(); i++) {
        result[i]++;
    }
    return result;
}

int main() {
    vector<int> test_list = {1, 2, 3};
    vector<int> incremented_list = incr_list(test_list);

    if (issame(test_list, incremented_list)) {
        cout << "Lists are the same." << endl;
    } else {
        cout << "Lists are different." << endl;
    }

    return 0;
}