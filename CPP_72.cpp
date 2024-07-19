#include <vector>
#include <string>
#include <algorithm>
#include <initializer_list>

using namespace std;

bool will_it_fly(initializer_list<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = str == stoi(str);
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}