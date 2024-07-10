```cpp
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= pow(10, n-1); i++) {
        string str(n, '0'); 
        for (char c : to_string(i)) {
            if(c == '0') std::string(1, c == '0' ? '1' : '0').insert(0, str.substr(0, i - 1));
            else std::string(1, c == '0' ? '0' : '1').insert(0, str.substr(0, i - 1));
        }
        if ((i == 1 || str[0] == '1' || str.back() == '1') && (str[0] == '1' || str[str.size()-1] == '1')) {
            count++;
        }
    }
    return count;

}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
}