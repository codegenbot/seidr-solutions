```cpp
cout << "The lists are the same: actual - ";
for(const string& str : result) {
    cout << str << ", ";
}
cout << "\nexpected - {" << "cc" << ", " << "dd" << ", " << "aaaa" << ", " << "bbbb" << "}\n";