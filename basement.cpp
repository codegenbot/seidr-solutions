#include <vector>
#include <iostream>
using namespace std;
int basement(vector<int>& v) {
    int sum = 0, i;
    for (i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) break;
    }
    return i - 1;
}
int main() {
    vector<int> v{1, -1};
    int result = basement(v);
    cout << "The first index with negative sum is: " << result << endl;
    return 0;
}