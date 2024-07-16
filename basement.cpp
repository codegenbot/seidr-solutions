#include <vector>
using namespace std;

int basement(const vector<int>& v) {
    int sum = 0;
    for (int i = 0; ; i++) {
        if(i >= v.size()) break;
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1; // No negative sum found
}

int main() {
    vector<int> v = {-5, -1, 3, 4, -2};
    int result = basement(v);
    cout << "Basement index: " << result << endl;
    return 0;
}