#include <iostream>
#include <vector>

int main() {
    int sum = 0;
    vector<int> lst;
    int num;
    
    cout << "Enter numbers (enter -1 to finish):" << endl;

    while ((cin >> num) && (num != -1)) {
        lst.push_back(num);
    }

    for (int i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0)
            sum += lst[i];
    }
    
    cout << "The sum of even numbers is: " << sum << endl;
    return 0;
}