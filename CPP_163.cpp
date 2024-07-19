#include <vector>

vector<int> issame(int a, int b) {
    vector<int> result;
    for(int i = a; i <= b; ++i) {
        if(i % 3 == 0) {
            result.push_back(i);
        }
    }
    return result;
}