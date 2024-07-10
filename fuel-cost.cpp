#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = ((num / 3) - 2);
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    while(n--) {
        int x; 
        cin >> x;
        numbers.push_back(x);
    }
    
    cout << calculateFuelCost(numbers) << endl;

    return 0;
}