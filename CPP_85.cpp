#include <vector>

using namespace std;

int add(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> lst.push_back(i);
    }
    cout << "The sum is: " << add(lst) << endl;
    return 0;
}