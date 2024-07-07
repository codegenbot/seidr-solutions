
#include <vector>
using namespace std;

vector<int> leaders(const vector<int>& v) {
    int max = *std::max_element(v.begin(), v.end());
    return vector<int>(max, 0);
}