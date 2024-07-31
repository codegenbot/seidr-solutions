#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == 0 && b.size() == 0) || (a.size() == b.size());
}