#include <vector>
#include <string>
#include <algorithm>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != string(str.rbegin(), str.rend())) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    vector<int> q = {1, 2, 3};
    int w = 6;
    if (!will_it_fly(q, w)) {
        cout << "The plane will not fly." << endl;
    } else {
        cout << "The plane will fly." << endl;
    }
    return 0;
}