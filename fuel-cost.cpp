#include <vector>
using namespace std;

int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        sum += (i / 3) - 2;
    }
    return sum;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    while(n--) {
        int num; 
        cin >> num;
        vec.push_back(num);
    }
    cout << fuelCost(vec) << endl;
    return 0;
}