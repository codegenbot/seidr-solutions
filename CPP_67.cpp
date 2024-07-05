#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0, oranges = 0;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    return n - apples - oranges;
}

int main() {
    // Test cases
    cout << fruit_distribution("5 apples and 6 oranges", 19) << endl;
    cout << fruit_distribution("0 apples and 1 oranges", 3) << endl;
    cout << fruit_distribution("2 apples and 3 oranges", 100) << endl;
    cout << fruit_distribution("100 apples and 1 oranges", 120) << endl;
    return 0;
}