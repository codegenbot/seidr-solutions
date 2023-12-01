#include <iostream>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    
    // Parse the string to get the number of apples and oranges
    int index = s.find("apples");
    if (index != string::npos) {
        apples = stoi(s.substr(0, index));
    }
    
    index = s.find("oranges");
    if (index != string::npos) {
        oranges = stoi(s.substr(index + 8));
    }
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}

int main() {
    string s;
    int n;
    
    // Read input from user
    cout << "Enter the string: ";
    getline(cin, s);
    cout << "Enter the total number of fruits: ";
    cin >> n;
    
    // Call the function and print the result
    int result = fruit_distribution(s, n);
    cout << "The number of mango fruits in the basket is: " << result << endl;
    
    return 0;
}