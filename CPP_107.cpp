int main 
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    vector<int> result = even_odd_palindrome(n);

    cout << "Number of even palindromes: " << result[0] << endl;
    cout << "Number of odd palindromes: " << result[1] << endl;
}
