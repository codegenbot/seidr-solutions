```c++
#include <vector>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != toString(reverse(str))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

vector<int> reverse(vector<int> v) {
    vector<int> result;
    for (int i = v.size() - 1; i >= 0; --i) {
        result.push_back(v[i]);
    }
    return result;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}