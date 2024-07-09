#include <vector>
using namespace std;

bool issame(vector<string> v1, vector<string> v2) {
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
}

int main() {
    vector<string> result = bf("Mars", "Saturn");
    assert(issame(result, {"Earth"})); 
    return 0;
}