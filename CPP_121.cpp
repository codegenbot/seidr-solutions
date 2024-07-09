#include <vector>

int main() {
    std::vector<int> lst;
    int sum = 0;

    // Read input from user
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        lst.push_back(num);
    }

    // Calculate the sum as per the problem description
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}