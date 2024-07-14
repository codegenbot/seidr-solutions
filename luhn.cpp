#include <vector>
using namespace std;

int luhn(vector<int> cc) {
    int sum = 0;
    for (int i = 0; i < cc.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = cc[i] * 2;
            if (temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += cc[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        card.push_back(x);
    }
    cout << luhn(card) << endl;
    return 0;
}