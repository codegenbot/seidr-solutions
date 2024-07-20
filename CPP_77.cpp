```c++
bool iscuber(int a){
    int c = round(cbrt(a));
    return (a == pow(c, 3));
}