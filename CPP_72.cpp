#include <vector>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != std::to_string(q).substr(0, str.length())) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}