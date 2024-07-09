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
    cout << "Enter number of elements in the list: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> lst.push_back(i);
    }
    cout << "Sum of odd numbers is: " << solution(lst) << endl;
    return 0;
}