```cpp
#include<vector>
#include<iostream>

int add(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    vector<int> input;
    cout << "Enter the numbers: ";
    int num;
    while(cin >> num) {
        input.push_back(num);
    }
    
    int result = add(input);
    cout << "Sum of even numbers is: " << result << endl;
    return 0;
}