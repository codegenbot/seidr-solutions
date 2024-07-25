#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    assert (issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
    return 0;
}
