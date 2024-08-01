#include <vector>

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
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        lst.push_back(num);
    }

    cout << "Sum of odd elements: " << solution(lst) << endl;
    return 0;
}