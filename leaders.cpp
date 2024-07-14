#include <vector>
using namespace std;

int leader(vector<int>& v) {
    int rightmost = v.back();
    vector<int> res;
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }
    return 0;

}

int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2};
    leader(v); 
    return 0;
}