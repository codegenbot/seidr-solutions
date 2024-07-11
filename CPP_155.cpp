#include <iostream>
#include <vector>
#include <string>

bool issame(int x, int y) {
    if(x == y)
        return true;
    else
        return false;
}

using namespace std;

vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
            even++;
        else
            odd++;
    }
    return {even, odd};
}

int main() {
    int n;
    cin >> n;
    vector<int> res = even_odd_count(n);
    cout << "Even digits: " << res[0] << endl;
    cout << "Odd digits: " << res[1] << endl;

    return 0;
}