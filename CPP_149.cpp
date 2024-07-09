```cpp
bool issame(int x, int y) {
    if (x > y) {
        return false;
    } else if (y > x) {
        return true;
    } else {
        return false; 
    }
}