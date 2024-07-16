#include <vector>
#include <cassert>
#include <cstdlib>

using namespace std;

vector<int> generate_integers(int start, int end) {
    vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}