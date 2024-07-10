#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= pow(10, n-1); i++) {
        if ((i == 1 || to_string(i).back() == '1') && to_string(i).find('1') == 0 || to_string(i).find('1') == to_string(i).size()-1) {
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