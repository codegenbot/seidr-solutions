#include <vector>
using namespace std;

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
    cout << "Enter numbers separated by space: ";
    int num;
    while (cin >> num) {
        lst.push_back(num);
        if (cin.peek() == ' ') {
            cin.ignore();
        } else if (cin.peek() != '\n') {
            break;
        }
    }
    cout << "Sum of odd numbers is: " << solution(lst) << endl;
    return 0;
}