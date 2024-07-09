Here is the solution:

```cpp
string solve(string s){
    string result = "";
    for (char c : s) {
        if (!isalnum(c)) {
            result += c;
        } else {
            result += (islower(c) ? toupper(c) : tolower(c));
        }
    }
    return result;
}