Here is the completed code:

```cpp
bool iscuber(int a){
    int i = round(cbrt(a));
    return (i*i*i) == a;
}