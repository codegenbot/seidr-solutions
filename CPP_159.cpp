#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = min(totalCarrots, remaining);
    int leftCarrots = max(0, remaining - totalCarrots);
    return {eatenCarrots, leftCarrots};
}

int main() {
    int number, need, remaining;
    cin >> number >> need >> remaining;
    vector<int> result = eat(number, need, remaining);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}