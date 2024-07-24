#include <iostream>
#include <vector>

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
    vector<int> input;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    cout << solution(input) << endl;
    return 0;
}