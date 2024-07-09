#include <iostream>
#include <string>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || to_string(i).back() == '1') { 
            count++;
        }
        for (int j = 1; j < i; j++) {
            if (to_string(j).back() != '1' && stoi(to_string(j)) / 10 != 1) { 
                break;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int result = starts_one_ends(n);
    cout << "The count of the numbers of " << to_string(n) << "-digit positive integers that start or end with 1 is: " << result << endl;
    return 0;