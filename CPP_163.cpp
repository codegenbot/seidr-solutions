#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        result.push_back(i);
    }
    return result;
}

vector<int> filter_even_numbers(vector<int> a) {
    vector<int> result;
    for (int i : a) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

assert(issame(filter_even_numbers(generate_integers(17, 89)), vector<int>{}));