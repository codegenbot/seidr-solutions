#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        if (result >= 1) {
            result--;
            sum += result;
        }
    }
    return sum;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    cout << calculateFuelCost(vec) << endl;
    return 0;
}