#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> v = {-3,2,-3,4,5,1,-12,6,5,1};
    int result = basement(v);
    cout << "Result: " << result << endl; 
    return 0;
}