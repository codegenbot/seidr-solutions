#include <vector>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for(int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert([](const vector<float>& a, const vector<float>& b) {
        if (a.size() != b.size()) {
            return false;
        }
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }(derivative({1}), {}));
}