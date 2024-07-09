```cpp
#include <vector>
#include <string>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != string(str.rbegin(), str.rend()).s) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    vector<int> quadcopter_weights = {10, 20, 30, 40, 50};
    int weight_limit = 100;

    if(will_it_fly(quadcopter_weights, weight_limit)) {
        cout << "The quadcopter will fly." << endl;
    } else {
        cout << "The quadcopter won't fly." << endl;
    }

    return 0;
}