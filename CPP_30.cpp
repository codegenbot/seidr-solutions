#include <vector>

using namespace std;

vector<float> get_positive(const vector<float>& l) {
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++) {
        if(l[i] > 0) {
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

bool are_same(const vector<float>& a, const vector<float>& b) {
    return (a == b);
}

int main() {
    assert(are_same(get_positive({}), {}));
    return 0;
}