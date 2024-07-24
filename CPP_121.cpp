#include <iostream>
#include <vector>

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> lst;
    int num;
    
    cout << "Enter numbers separated by spaces: ";
    while(cin >> num) {
        lst.push_back(num);
    }
    
    cout << "Sum of odd numbers: " << solution(lst) << endl;
    
    return 0;
}