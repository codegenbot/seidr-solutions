#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int rightmost = v.back();
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            res.push_back(v[i]);
            rightmost = v[i];
        }
    }
    res.push_back(rightmost);
    return res;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> v[i];

    vector<int> leaders_result = leaders(v);

    // Print the result here or use it however you want
    return 0;
}