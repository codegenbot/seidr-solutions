#include <algorithm>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost);
    
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }
    
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {1, 3, 4, 2, 6};
    vector<int> leaders_result = leaders(v);
    // print or use the result here
    return 0;
}