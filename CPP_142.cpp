#include <vector>
#include <cmath>

int sum_squares(vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0)
            total += pow(lst[i], 2);
        else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0)
            total += pow(lst[i], 3);
    }
    return total;
}

int main() {
    vector<int> lst = {1, 2, 3, 4, 5};
    int result = sum_squares(lst);
    cout << "The result is: " << result << endl;
    return 0;
}