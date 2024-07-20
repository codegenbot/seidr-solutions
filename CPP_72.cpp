#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    
    if (str != reverse(str).s) {
        return false;
    } else if (accumulate(q.begin(), q.end(), 0) > w) {
        return false;
    }
    
    return true;
}

int main() {
    assert (will_it_fly({5}, 5) == true);
}