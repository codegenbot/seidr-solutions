Here is the completed code:

bool iscuber(int a){
    int i = 1;
    while (true) {
        int c = pow(i, 3);
        if (c == a) return true;
        if (c > a) break;
        i++;
    }
    return false;
}