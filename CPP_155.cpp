```cpp
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> result = even_odd_count(abs(num));
    if(issame(even_odd_count(num), result)) 
        cout << "The given number is palindrome." << endl;  
    else
        cout << "The given number is not palindrome." << endl;  
}