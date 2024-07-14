#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        if (result < 1) result = 0;
        else result--;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << fuelCost(v) << endl;
    return 0;
}