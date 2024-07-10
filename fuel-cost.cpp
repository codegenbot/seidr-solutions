#include <vector>
using namespace std;

int fuelCost(vector<int> arr) {
    int total = 0;
    for (int i : arr) {
        int x = i / 3;
        x = x - 2;
        total += x;
    }
    return total;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    while(n--) {
        int num; 
        cin >> num;
        arr.push_back(num);
    }
    cout << fuelCost(arr) << endl;
    return 0;
}