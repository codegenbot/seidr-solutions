int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    vector<int> result = even_odd_count(num);
    cout << "Even numbers: " << result[0] << endl;
    cout << "Odd part of the number is: " << result[1] << endl;

    return 0;
}