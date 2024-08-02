#include <vector>
using namespace std;

int fuelCost(vector<int> arr) {
    int sum = 0;
    for (int i : arr) {
        int temp = (i / 3);
        if(temp < 1)
            temp = 0;
        else
            temp--;
        sum += temp;
    }
    return sum;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << fuelCost(arr) << endl;
    return 0;
}