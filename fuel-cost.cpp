#include <vector>
#include <iostream> 
using namespace std;

int calculateFuelCost(vector<int> &vec) {
    int total = 0;
    for (int i : vec) {
        total += max(0, (int)(i / 3.0) - 2);
    }
    return total;
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
    
    cout << calculateFuelCost(vec) << endl;

    return 0;
}