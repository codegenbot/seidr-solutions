Here is the completed code:

bool iscuber(int a){
    int i = 1;
    while (true) {
        if (pow(i,3) == a) return true;
        if (i*i*i > a) break;
        i++;
    }
    return false;
}