#include<iostream>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples, oranges;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    int mangoes = n - apples - oranges;
    return mangoes;
}

int main() {
    string s;
    int n;
    cout << "Enter the fruit distribution: ";
    getline(cin, s);
    cout << "Enter the total number of fruits: ";
    cin >> n;

    int result = fruit_distribution(s, n);
    cout << "Number of mangoes: " << result << endl;

    return 0;
}