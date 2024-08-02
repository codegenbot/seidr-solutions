#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        sum += ((x / 3) - 2);
    }
    return sum;
}

int main() {
    vector<int> v;  
    //read inputs from user
    //push values into vector 'v' 
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        int x;   
        cin >> x;
        v.push_back(x);
    }
    
    cout << fuelCost(v) << endl;

    return 0;
}