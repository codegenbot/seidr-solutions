#include <vector>
using namespace std;

int compare(vector<int> a, vector<int> b) {
    // Your implementation here
}

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) return vector<int>({1});
        else if (a[i] < b[i]) return vector<int>({-1});
        else return vector<int>({0});
    }
    return vector<int>{}; // in case vectors are empty
}

int testMain() {
    assert(same({1,2,3,5},{-1,2,3,4}) == vector<int>({2,0,0,1}));
    return 0;
}