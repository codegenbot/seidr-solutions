#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int total = 0;
    for (int num : v) {
        int result = (num / 3) - 2;
        if (result < 0) result = 0;
        total += result;
    }
    return total;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cout << fuelCost(vec) << endl;
    return 0;
}