int main {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    string result = int_to_mini_roman(number);
    cout << "The mini Roman numeral is: " << result << endl;
}