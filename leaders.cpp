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
    vector<int> input = {1, 3, 4, 1, 5};
    vector<int> output = leaders(input);
    for(int i : output) cout << i << " ";
    return 0;
}