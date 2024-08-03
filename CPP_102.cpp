int choose_num(int x, int y){
    if(x % 2 == 0 && x <= y) return x;
    for(int i = x + 1; i <= y; i++){
        if(i % 2 == 0) return i;
    }
    return -1;
}