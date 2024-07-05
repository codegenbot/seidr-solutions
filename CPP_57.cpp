#include <iostream>
#include <vector>

using namespace std;

bool monotonic(vector<float> l) {
    if(l.size() <= 1) return true;
    bool increasing = true, decreasing = true;
    for(size_t i = 1; i < l.size(); ++i) {
        if(l[i] > l[i-1]) decreasing = false;
        if(l[i] < l[i-1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    cout << boolalpha;
    cout << monotonic({9, 9, 9, 9}) << endl;
    cout << monotonic({1, 2, 3, 4}) << endl;
    cout << monotonic({4, 3, 2, 1}) << endl;
    cout << monotonic({1, 3, 2, 4}) << endl;
}