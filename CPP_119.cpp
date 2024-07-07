Here is the completed code:

```cpp
bool hasOpen = false;
for (const auto& s : lst) {
    for (char c : s) {
        if (c == '(') {
            hasOpen = true;
        } else if (c == ')' && !hasOpen) {
            return "No";
        }
    }
}
return hasOpen ? "Yes" : "No";