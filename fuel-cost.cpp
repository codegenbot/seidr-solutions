#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = i / 3;
        temp = temp > 0 ? temp - 2 : 0;
        sum += temp;
    }
    return sum;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    cout << fuelCost(vec) << endl;
    return 0;
}