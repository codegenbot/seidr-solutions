```
#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    
    if (remaining >= need - number) {
        result.push_back(number + need);
        result.push_back(0);
    } else {
        result.push_back(number + remaining);
        result.push_back(0);
    }
    
    return result;
}

int main() {
    int num, nee, rem;
    cin >> num >> nee >> rem;
    vector<int> res = eat(num, nee, rem);
    cout << res[0] << " " << res[1];
    return 0;
}