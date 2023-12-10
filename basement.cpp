#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> vec = {1, -1};
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}