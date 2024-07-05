#include <vector>
#include <algorithm>

bool issame(vector<float> l) {
    float first = *l.begin();
    for (float num : l) {
        if (num != first)
            return false;
    }
    return true;
}

int main() {
    vector<float> l = {1.0, 2.0, 3.0};
    cout << issame(l) << endl;
}