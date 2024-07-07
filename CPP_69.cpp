#include <iostream>
using namespace std;

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

int userMain() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num; 
    if (num >= 0) {
        cout << "The search function returns " << search(num) << " for the number " << num << "." << endl;
    } else {
        cout << "The search function returns -1 for negative numbers." << endl;
    }
    
    int myTest = 3, myArray[] = {myTest, 10, 10, 9, 2};
    assert(search(myTest) == -1);
    return 0;
}