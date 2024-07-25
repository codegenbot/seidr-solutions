int main 
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string output = make_palindrome(input);
    cout << "Palindrome of the given string is: " << output << endl;
}