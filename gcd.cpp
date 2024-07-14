#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    vector<int> indices; 
    string text = "Hello";
    string target = "lo";

    for(int i=0; i<=num1-num2; i++){
        if(text.substr(i, target.length()) == target){
            indices.push_back(i);
        }
    }

    cout << "Indices: ";
    for (auto i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}