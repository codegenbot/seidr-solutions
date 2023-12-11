#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int> input) {
    int n = input.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += input[i];
    }
    int halfSum = sum / 2;
    int currSum = 0;
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        currSum += input[i];
        if (currSum == halfSum || currSum == halfSum + 1) {
            cutIndex = i;
            break;
        }
    }
    vector<int> subVector1(input.begin(), input.begin() + cutIndex + 1);
    vector<int> subVector2(input.begin() + cutIndex + 1, input.end());
    return {subVector1, subVector2};
}

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    vector<int> result1, result2;
    tie(result1, result2) = cutVector(input);
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i] << endl;
    }
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i] << endl;
    }
    return 0;
}