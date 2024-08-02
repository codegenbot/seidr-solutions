#include <vector>
using namespace std;

int calculateFuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = (i / 3);
        temp = temp - 2;
        sum += temp;
    }
    return sum;
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