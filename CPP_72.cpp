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
    vector<int> weights = {2,3,4,1,5};
    int maxWeight = 9;
    if(will_it_fly(weights, maxWeight)) {
        cout << "The quadcopter will fly." << endl;
    } else {
        cout << "The quadcopter won't fly." << endl;
    }
    return 0;
}