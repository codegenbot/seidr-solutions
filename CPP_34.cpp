#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    return vector<int>(unique(l.begin(), l.end()));
}