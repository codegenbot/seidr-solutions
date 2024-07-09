#include <vector>

int main() {
    vector<int> lst = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    cout << "The total sum is: " << sum;
    return 0;
}