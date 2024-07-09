Here is the completed code:

```cpp
int stack_size = 0;
for (auto &s : lst) {
    int size = s.size();
    for (int i = 0; i < size; i++) {
        if (s[i] == '(') {
            stack_size++;
        } else if (s[i] == ')') {
            if (stack_size <= 0) return "No";
            stack_size--;
        }
    }
}
if (stack_size > 0) return "No";
return "Yes";