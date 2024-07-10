#include <vector>
#include <string>
#include <algorithm>

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

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

int main() {
    vector<int> q1 = {3, 5, 7};
    int weight1 = 15;
    if(will_it_fly(q1, weight1)) {
        cout << "The quadcopter will fly." << endl;
    } else {
        cout << "The quadcopter won't fly." << endl;
    }
    
    return 0;
}