#include <algorithm>
#include <vector>
#include <assert.h>

bool issame(vector<string> a,vector<string>b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}