```c++
bool iscuber(int a){
    int i = 1;
    while (true) {
        int b = pow(i, 3);
        if (b == a)
            return true;
        else if (b > a)
            return false;
        i++;
    }
}