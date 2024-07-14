#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = (i / 3);
        if(temp<1)
            temp=0;
        else
            temp--;
        sum += temp;
    }
    return sum;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }
    cout << fuelCost(vec) << endl;
    return 0;
}