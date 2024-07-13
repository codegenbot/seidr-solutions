int main
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << intToMiniRoman(n) << endl;
    assert(intToMiniRoman(1000) == "M");
    return 0;
}