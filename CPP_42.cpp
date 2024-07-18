#include <vector>

vector<int> incr_list(vector<int> l);
bool issame(vector<int> a, vector<int> b);

int main() {
    // Main function implementation
}

vector<int> incr_list(vector<int> l) {
    for(int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}