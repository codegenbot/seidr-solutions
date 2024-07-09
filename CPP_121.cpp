#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> input;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    
    int result = solution(input);
    cout << "Sum of odd numbers in the array is: " << result << endl;
    return 0;
}