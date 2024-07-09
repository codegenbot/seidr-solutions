#include <vector>
#include <algorithm>
#include <string>

int main() {
    vector<int> q;
    int w;
    cout << "Enter the number of queries: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter query " << i+1 << ": ";
        int val;
        cin >> val;
        q.push_back(val);
    }
    cout << "Enter the maximum weight: ";
    cin >> w;

    bool willItFly = will_it_fly(q, w);

    if (willItFly) {
        cout << "Yes, it will fly." << endl;
    } else {
        cout << "No, it won't fly." << endl;
    }

    return 0;
}

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}