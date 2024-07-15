#include <string>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    int sum1 = 0, sum2 = 0;
    for (const auto &str : a) {
        sum1 += str.size();
    }
    for (const auto &str : b) {
        sum2 += str.size();
    }

    return sum1 == sum2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}