Here is the solution:

bool iscuber(int a){
    int i = 0;
    while (1) {
        if (pow(i, 3) == a) return true;
        if (pow(i, 3) > a) break;
        i++;
    }
    return false;
}