#include <vector>
using namespace std;

int main() {
    vector<int> v = {17, 11, 13, 12};
    vector<int> result = leaders(v);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int> v) {
    vector<int> result;
    if(v.size() == 1) {
        result.push_back(v[0]);
    } else {
        int rightmost = v.back();
        for (int i = v.size() - 2; i >= 0; i--) {
            if (v[i] >= rightmost) {
                rightmost = v[i];
                result.push_back(rightmost);
            }
        }
    }
    return result;
}