#include <vector>
#include <iostream>

int main() {
    int solution(vector<int> lst) {
        int sum = 0;
        for (int i = 1; i < lst.size(); i++) {
            if (lst[i] % 2 != 0) {
                sum += lst[i];
            }
        }
        return sum;
    }

    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter element " << (i+1) << ": ";
        int x;
        cin >> x;
        lst.push_back(x);
    }

    cout << "Sum of odd numbers is: " << solution(lst);

    return 0;
}