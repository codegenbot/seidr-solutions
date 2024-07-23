#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> result;
    size_t pos = 0;
    while((pos = text.find(target)) != string::npos) {
        result.push_back(pos);
        pos += target.size();
    }

    if(result.empty()) {
        cout << "Target not found in the text." << endl;
    } else {
        cout << "Indices of Target: ";
        for(int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}