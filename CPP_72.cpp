#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    if (!s.compare(toString(s))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

std::string toString(std::string s) {
    std::string t = s;
    reverse(t.begin(), t.end());
    return t;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}