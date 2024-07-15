#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>

using namespace std;

bool compare_vectors(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int execute_test() {
    assert(compare_vectors(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}