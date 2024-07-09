#include <iostream>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(remaining, need);
    
    return {total, remaining - left};
}

int main() {
    cout << "{";
    for (int i = 0; i < 3; i++) {
        vector<int> result = eat(i, 10 - i, 10);
        cout << result[0] << "," << result[1];
        if (i != 2) cout << ",";
        cout << endl;
    }
}