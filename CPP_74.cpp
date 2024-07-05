#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& str : lst1) sum1 += str.size();
    for (const auto& str : lst2) sum2 += str.size();
    return (sum1 <= sum2) ? lst1 : lst2;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(issame(total_match({"a"}, {"ab"}), {"a"}));
    assert(issame(total_match({"ab"}, {"cde"}), {"cde"}));
    cout << "All tests passed!" << endl;
    return 0;
}