```
int main() 
{
    assert(issame({{ "xxx", "xxx" }, { "xxxxAA", "xxxAAA" } }));
    vector<string> strings = {"hello", "hell", "world"};
    vector<string> filteredStrings = filter_by_prefix(strings, "hel");
    for (const auto& s : filteredStrings) 
    {
        cout << s << endl;
    }
    return 0;
}