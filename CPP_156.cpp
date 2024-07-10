```cpp
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The Roman numeral for " << num << " is " << int_to_mini_roman(num) << endl;
    return 0;
}

string int_to_mini_roman(int num);