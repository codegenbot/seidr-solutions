#include <vector>
#include <iostream>

using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> sample {3, 13, 2, 9};
    cout << solutions(sample) << endl;
    return 0;
}