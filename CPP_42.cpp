#include <vector>

vector<int> incr_list(vector<int> l);
bool issame(vector<int> a, vector<int> b);

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}