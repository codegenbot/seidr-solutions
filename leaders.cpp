#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int rightmost = v.back();
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }
    return res;

}

int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2};
    for(int x : leaders(v)) cout << x << " ";
    return 0;
}