#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> vec = {1, -1};
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (sum + vec[i] >= 0) {
            continue;
        }
        cout << "First negative index: " << i << endl;
        break;
    }
    return 0;
}