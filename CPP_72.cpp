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
    vector<int> q = {1,2,3,4};
    int w = 10;
    if(will_it_fly(q,w)) cout << "The quadcopter will fly.\n";
    else cout << "The quadcopter won't fly.\n";
    return 0;
}