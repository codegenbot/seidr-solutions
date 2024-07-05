#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1;
        }
    }
    return -1;
}

int main() {
    vector<int> vec = {-3, 2, 5, -1, 6};
    int result = basement(vec);
    cout << "Result: " << result << endl;
    return 0;
}