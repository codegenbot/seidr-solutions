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
    vector<int> q;
    int w;
    cout << "Enter the number of quackers: ";
    cin >> w;
    cout << "Enter the weights of quackers: ";
    for (int i = 0; i < w; i++) {
        int weight;
        cin >> weight;
        q.push_back(weight);
    }
    if (will_it_fly(q, w)) {
        cout << "The bag will fly." << endl;
    } else {
        cout << "The bag won't fly." << endl;
    }
    return 0;
}