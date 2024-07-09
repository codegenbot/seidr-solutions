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
    vector<int> lst = {10, 3, 5, 4, 6, 7};
    int output = solution(lst);
    cout << "Sum of all odd numbers: " << output << endl;
    return 0;
}