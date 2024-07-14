#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        if (result > 0) {
            result--;
        }
        total += result - 2;
    }
    return total;
}

int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}