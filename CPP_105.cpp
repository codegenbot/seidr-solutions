#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if(a == b) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    vector<int> arr;    
    for(int i=0; i<5; i++) {
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;
        arr.push_back(n);
    }
    vector<string> result = by_length(arr);
    for (string str : result) {
        cout << str << endl;
    }
    return 0;
}

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    return numbers;
}