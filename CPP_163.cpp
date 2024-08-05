#include <vector>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for(int i = a; i <= b; i++){
        result.push_back(i);
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    
    return 0;
}