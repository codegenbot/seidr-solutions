#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (string str : lst1) {
        sum1 += str.length();
    }
    for (string str : lst2) {
        sum2 += str.length();
    }
    if (sum1 < sum2) {
        return lst1;
    }
    return lst2;
}

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}