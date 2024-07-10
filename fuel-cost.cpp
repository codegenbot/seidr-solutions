#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        if (result >= 1)
            sum += result - 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++)
        cin >> vec[i];
    
    cout << fuelCost(vec) << endl;

    return 0;
}