#include <iostream>
#include <vector>

using namespace std;

bool monotonic(vector<float> l){
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    vector<float> l;
    float x;
    while (cin >> x) {
        l.push_back(x);
    }
    cout << (monotonic(l) ? "true" : "false") << endl;
    return 0;
}