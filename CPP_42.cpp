#include <vector>

vector<int> incr_list(vector<int> l);
bool issame(vector<int> a, vector<int> b);

int main() {
    // Your main function code goes here
    return 0;
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