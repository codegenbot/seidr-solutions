```
#include <initializer_list>
#include <vector>

int solution(vector<int> lst);

int main() {
    int sum;
    vector<int> lst;
    cout << "Enter numbers separated by spaces: ";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        lst.push_back(num);
    }
    sum = solution(lst);
    cout << "Sum of odd numbers is: " << sum << endl;
    return 0;
}

int solution(vector<int> lst) {
    int total_sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            total_sum += lst[i];
        }
    }
    return total_sum;
}