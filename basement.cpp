#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> vec = {1, -1};
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (sum + vec[i] >= 0) {
            return i;
        }
        sum += vec[i];
    }
    return -1;
}