#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);
vector<int> incr_list(vector<int> l);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        result.push_back(l[i] + 1);
    }
    return result;
}

int main() {
    vector<int> input = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    vector<int> expected_output = {6, 3, 6, 3, 4, 4, 10, 1, 124};
    
    vector<int> output = incr_list(input);
    
    assert(issame(output, expected_output));
    
    return 0;
}