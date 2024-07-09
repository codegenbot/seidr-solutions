```cpp
for(int i=0; i<n; ++i){
    string s;
    getline(cin, s);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (!s.empty()) {
        lst.push_back(s);
    }
}