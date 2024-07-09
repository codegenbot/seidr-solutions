int main
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int result = starts_one_ends(n);
    cout << "The count of the numbers of " << to_string(n) << "-digit positive integers that start or end with 1 is: " << result << endl;
    return 0;