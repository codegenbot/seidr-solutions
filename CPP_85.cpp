#include <iostream>
#include <vector>

using namespace std;

int add(vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i++){
        if(i % 2 != 0)
            sum += lst[i];
    }
    return sum;

}

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter some numbers (enter -1 when you are done):" << endl;

    for(num = 0; ; num++){
        cin >> numbers.push_back(num);
        if(num == -1) break;
    }

    int result = add(numbers);
    cout << "Sum of odd-indexed numbers: " << result << endl;

    return 0;
}