int main 
{ 
    int number; 
    cout << "Enter an integer: "; 
    cin >> number; 
    string roman = int_to_mini_roman(number); 
    cout << "The mini Roman numeral representation is: " << roman << endl; 
}