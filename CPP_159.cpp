#include <vector>

vector<int> eat(int number, int need, int remaining){
    int totalCarrots = number + need;
    int eatenCarrots = min(totalCarrots, remaining);
    int leftCarrots = max(0, remaining - totalCarrots);
    return {eatenCarrots, leftCarrots};
}

int main() {
    int num, n, rem;
    cin >> num >> n >> rem;
    vector<int> result = eat(num, n, rem);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}