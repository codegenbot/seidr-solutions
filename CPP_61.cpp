```cpp
int count = 0;
for (char c : brackets) {
    if (c == '(') {
        count++;
    } else if (c == ')') {
        if (count <= 0) return false;
        count--;
    }
}
return count == 0;