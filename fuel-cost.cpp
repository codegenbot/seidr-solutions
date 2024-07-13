#include <vector>
using namespace std;

int fuelCost(vector<int> arr) {
    int sum = 0;
    for(int i : arr) {
        sum += (i / 3 - 2);
    }
    return sum;
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