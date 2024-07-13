Here is the completed C++ code:

#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> result;
    int rightmost = v.back();
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            result.push_back(rightmost);
        }
    }
    return result;
}