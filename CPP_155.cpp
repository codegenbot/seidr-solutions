#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0)
            even++;
        else
            odd++;
    }
    vector<int> result({even, odd});
    return result;
}