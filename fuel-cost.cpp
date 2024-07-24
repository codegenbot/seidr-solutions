#include <vector>
using namespace std;

int fuelCost(vector<int> &vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        if (result > 0)
            result--;
        else
            result = 0;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cout << fuelCost(vec) << endl;
    return 0;
}