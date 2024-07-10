#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> even_odd_count(int num) {
    int count_even = 0, count_odd = 0;
    string str_num = to_string(abs(num));
    for (char c : str_num) {
        if ((c - '0') % 2 == 0)
            ++count_even;
        else
            ++count_odd;
    }
    return {count_even, count_odd};
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    vector<int> result = even_odd_count(num);
    
    cout << "Number of even digits: " << result[0] << endl;
    cout << "Number of odd digits: " << result[1] << endl;

    return 0;
}