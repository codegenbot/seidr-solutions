#include <vector>
using namespace std;

int fuelCost(vector<int>& v) {
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        int num = (v[i] / 3);
        num = (num > 1) ? num - 2 : 0;
        sum += num;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        v.push_back(n);
    }

    cout << fuelCost(v) << endl;

    return 0;
}