bool isSimplePower(int x, int n){
    double y = pow(n, ceil(log2(x)));
    if(y == x) {
        for(int i = 1; ;i++){
            if(pow(n, i) != x) break;
        }
        return true;
    } else {
        return false;
    }
}