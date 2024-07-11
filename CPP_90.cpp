#include <iostream>
#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    int result = -1;
    for (int i = 0; i < lst.size(); i++) {
        bool flag = true;
        for (int j = 0; j < lst.size(); j++) {
            if (i != j && lst[i] > lst[j]) {
                flag = false;
                break;
            }
        }
        if (flag) return lst[i];
    }
    return result;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -1);
    return 0;
}