#include <vector>
#include <string>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (!is_palindrome(str)) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    vector<int> q = {1, 2, 3};
    int w = 5;
    if (!will_it_fly(q, w)) {
        cout << "It won't fly." << endl;
    } else {
        cout << "It will fly." << endl;
    }
    return 0;
}