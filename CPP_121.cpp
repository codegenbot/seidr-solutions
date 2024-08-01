#include <vector>

int main() {
    vector<int> lst = {1,2,3,4,5};
    int solution = solution(lst);
    cout << "The sum of odd numbers is: " << solution << endl;
}

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}