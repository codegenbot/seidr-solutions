#include <iostream>

double median(vector<int>& l) {
    sort(l.begin(), l.end());
    int n = l.size();
    return n % 2 == 0 ? (l[n / 2 - 1] + l[n / 2]) / 2.0 : l[n / 2];
}

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
  
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    double result = median(input);
    cout << result;
    return 0;
}