#include <vector>

namespace std {
  
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sum_product(const vector<int>& v) {
    int sum = 0, product = 1;
    for (auto num : v) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

}

using namespace std;