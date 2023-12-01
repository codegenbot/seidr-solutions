#include <vector>

vector<int> eat(int number, int need, int remaining);

int main() {
    int number, need, remaining;
    cin >> number >> need >> remaining;

    vector<int> result = eat(number, need, remaining);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = remaining - need;
    
    if (left < 0) {
        left = 0;
    }
    
    vector<int> result = {total, left};
    return result;
}