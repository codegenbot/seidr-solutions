int main
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "Anti-Shuffle of input sentence is: " << anti_shuffle(s) << endl;

    return 0;
}