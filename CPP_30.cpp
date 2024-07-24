#include <vector>
#include <iostream>
using namespace std;

bool isSame(vector<float> l) {
    if (l.size() == 0)
        return true;
    float num = l[0];
    for (float i : l) {
        if (i != num)
            return false;
    }
    return true;
}

int main() {
    vector<float> list;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        float x;
        cin >> x;
        list.push_back(x);
    }
    vector<float> posList = get_positive(list);
    if (!isSame(posList)) {
        assert(false);
    } else {
        cout << "The positive numbers are same." << endl;
    }
    return 0;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}