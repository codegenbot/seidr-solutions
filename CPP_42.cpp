#include <vector>

vector<int> incr_list(vector<int> l);
bool issame(vector<int> a, vector<int> b);

vector<int> incr_list(vector<int> l) {
    for (int &num : l) {
        num++;
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}