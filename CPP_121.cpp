#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum = 0;
    vector<int> lst;
    cout << "Enter numbers (space-separated): ";
    char c; cin >> c; while(c != '\n') {c=getchar();}
    while (cin >> c) {
        lst.push_back(atoi(&c));
        c = ' ';
    }
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    cout << "Sum of odd numbers: " << sum << endl;
}