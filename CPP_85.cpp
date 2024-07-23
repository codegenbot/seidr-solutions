#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    
    int num;
    while(true){
        cin >> num;
        if (num == -1) break;
        numbers.push_back(num);
    }
    
    cout << "The sum of the input integers is: " << add(numbers) << endl;
    
    return 0;
}

int add(vector<int> v) {
    int sum = 0;
    for(int i : v) {
        sum += i;
    }
    return sum;
}