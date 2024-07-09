#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << fuelCost(numbers) << endl;
    return 0;
}