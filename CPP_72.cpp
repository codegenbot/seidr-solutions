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

    cout << "Enter the number of queries: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter query " << i + 1 << ": ";
        int num;
        cin >> num;
        q.push_back(num);
    }

    cout << "Enter the weight: ";
    cin >> w;

    if(will_it_fly(q, w))
        cout << "It will fly.\n";
    else
        cout << "It won't fly.\n";

    return 0;
}