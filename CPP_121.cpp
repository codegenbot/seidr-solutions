#include <iostream>
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
    vector<int> input;
    int num;
    cout << "Enter the numbers of the list (separated by space): ";
    while(cin >> num) {
        input.push_back(num);
    }
    cout << "The result is: " << solution(input) << endl;
    return 0;
}