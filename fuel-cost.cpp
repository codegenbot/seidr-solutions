#include <vector>
#include <iostream>

using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;
}

int main() {
    int n;
    cin >> std::cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << std::cout << fuelCost(v) << std::endl;
    return 0;
}