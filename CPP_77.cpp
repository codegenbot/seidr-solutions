```c++
bool iscuber(int a){
    int i = 0;
    while (1) {
        long long temp = pow(i,3);
        if(temp == a)
            return true;
        else if(temp > a)
            return false;
        i++;
    }
}