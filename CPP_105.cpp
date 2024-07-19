#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> by_length(vector<int> arr);

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}