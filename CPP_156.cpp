int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    string roman = int_to_mini_roman(number);
    cout << "Roman Numeral: " << roman << endl;
    
    return 0;
}