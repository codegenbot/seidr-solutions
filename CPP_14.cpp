int main 
{
    string str = "WWW";
    if (!issame(all_prefixes(str), {"W", "WW", "WWW"})) {
        cout << "Error: Expected prefixes are not the same." << endl;
    } else {
        cout << "Test passed!" << endl;
    }
    return 0;
}