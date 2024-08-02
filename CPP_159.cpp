#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total, 0};
    } else {
        return {total, remaining - total};
    }
}

int main() {
    vector<int> result1 = eat(5, 6, 10);
    cout << "Eaten: " << result1[0] << ", Remaining: " << result1[1] << endl;

    vector<int> result2 = eat(4, 8, 9);
    cout << "Eaten: " << result2[0] << ", Remaining: " << result2[1] << endl;

    vector<int> result3 = eat(1, 10, 10);
    cout << "Eaten: " << result3[0] << ", Remaining: " << result3[1] << endl;

    vector<int> result4 = eat(2, 11, 5);
    cout << "Eaten: " << result4[0] << ", Remaining: " << result4[1] << endl;

    return 0;
}