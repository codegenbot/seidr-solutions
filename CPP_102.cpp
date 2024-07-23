int choose_num(int x, int y){
    if(x%2==0 && y%2==0){
        return (x>y)?y:x;
    }else if((x%2!=0&&y%2!=0)){
        return -1;
    }else{
        return -1;
    }
}