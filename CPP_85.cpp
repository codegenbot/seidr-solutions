```
#include <iostream>
#include <vector>
using namespace std;

int add(vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    vector<int> numbers({1, 2, 3, 4, 5}); 
    int num;
    cout << "Enter the numbers: ";
    while(cin >> num) {
        numbers.push_back(num);
    }
    cout << "Sum of even numbers: " << add(numbers) << endl;
    return 0;
}