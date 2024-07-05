#include<iostream>
using namespace std;

float truncate_number(float number){
    return static_cast<int>(number);
}

int main(){
    float number;
    cout << "Enter a float number: ";
    cin >> number;
    cout << "Truncated number: " << truncate_number(number) << endl;
    return 0;
}