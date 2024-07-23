#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3;
        x = floor(x);
        x -= 2;
        sum += x;
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    cout << fuelCost(input) << endl;
    return 0;
}