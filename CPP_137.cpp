#include <algorithm>
#include <string>

using std::max;
using std::string;

template<typename T>
T compare_one(T a, T b) {
    return max(a, b);
}

string compare_one(string a, string b) {
    return max(a, b);
}

int main() {
    assert(compare_one(string("1"), string("None")) == "None");
    return 0;
}