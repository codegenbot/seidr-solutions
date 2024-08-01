#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    while(n--) {
        int x; 
        cin >> x;
        vec.push_back(x);
    }
    cout << fuelCost(vec) << endl;
    return 0;
}