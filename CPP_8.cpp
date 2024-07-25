#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

pair<int, int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return make_pair(sum, product);
}

vector<int> toVector(const pair<int, int>& p) {
    return {p.first, p.second};
}

int main() {
    assert(issame(toVector(sum_product({10})), {10, 10}));
}