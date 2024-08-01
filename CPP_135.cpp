```cpp
int i = 0;
while (i < arr.size() - 1) {
    if (arr[i] >= arr[i + 1]) {
        return i;
    }
    i++;
}
return -1;