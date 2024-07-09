#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
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

int main() {
    vector<int> input = {17, 11, 13, 7, 5, 2};
    vector<int> result = leaders(input);
    for (auto x : result) {
        cout << x << " ";
    }
    return 0;
}