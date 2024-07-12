#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;
    
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    numVec.push_back(temp);

    sort(numVec.begin(), numVec.end());
    
    string result;
    for (int i = 0; i < numVec.size(); i++) {
        result += numVec[i] + " ";
    }
    
    return result;
}

int main() {
    string numbers;
    cout << "Enter a space-delimited string of numberals from 'zero' to 'nine': ";
    getline(cin, numbers);
    cout << sort_numbers(numbers) << endl;
    return 0;
}