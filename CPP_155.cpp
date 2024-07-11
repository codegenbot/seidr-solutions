int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> result = even_odd_count(num);
    if(issame(result, vector<int>{1,0})) {
        cout << "The input number is a palindrome." << endl;
    } else {
        cout << "The input number is not a palindrome." << endl;
    }
    return 0;
}