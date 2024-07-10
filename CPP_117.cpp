int main
{
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> res = select_words(s, n);
    for (string str : res)
    {
        cout << str << endl;
    }
    return 0;
}