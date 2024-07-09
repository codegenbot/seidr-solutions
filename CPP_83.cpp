#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= (long long)pow(10, n-1); i++) {
        string str = to_string(i);
        if ((str[0] == '1' || str[str.size()-1] == '1') && str.size() == n) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    cout << "The count of the numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}