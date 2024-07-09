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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cout << "Enter element " << i << ": ";
        cin >> x;
        lst.push_back(x);
    }
    cout << "Sum of odd numbers is: " << solution(lst) << endl;
    return 0;
}