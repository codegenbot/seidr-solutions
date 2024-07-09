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
    cout << "Enter the weight: ";
    cin >> w;
    cout << "Enter the query weights: ";
    for(int i=0; i<q.size();i++){
        cin >> q[i];
    }
    if(will_it_fly(q, w)){
        cout << "The aircraft will fly.";
    } else {
        cout << "The aircraft won't fly.";
    }
    return 0;
}