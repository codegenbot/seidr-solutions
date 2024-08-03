#include <vector>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != to_string(reverse(str))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

vector<int> reverse(vector<string> v) {
    vector<int> result;
    for (string s : v) {
        result.push_back(stoi(s));
    }
    return result;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}