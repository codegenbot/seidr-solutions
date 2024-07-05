#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool monotonic(vector<float> l){
    if (l.size() <= 1) return true;
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    assert(monotonic(vector<float>{9, 9, 9, 9}) == true);
    return 0;
}