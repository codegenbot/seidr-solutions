```
#include <vector>
#include <algorithm>

int main() {
    int search(vector<int> lst) {
        int max = -1;
        for (auto num : lst) {
            if (num > 0 && count(num) >= num) {
                max = num;
                break;
            }
        }
        return max;
    }

    vector<int> lst;
    cout << "Enter numbers separated by spaces: ";
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        lst.push_back(x);
    }

    cout << "The maximum number is " << search(lst) << endl;

    return 0;
}