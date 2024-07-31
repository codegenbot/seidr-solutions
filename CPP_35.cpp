#include <algorithm>
using namespace std;

int maxElement(const vector<int>& l) {
    return *max_element(l.begin(), l.end());
}