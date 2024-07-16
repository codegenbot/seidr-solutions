vector<int> tri(int n){
    vector<int> result;
    if(n == 0){
        result.push_back(0);
        return result;
    }
    if(n == 1){
        result.push_back(3);
        return result;
    }
    result.push_back(3);
    result.push_back(1);
    result.push_back(2);
    int a = 3, b = 1, c = 2;
    for(int i = 3; i <= n; i++){
        int next;
        if(i % 2 == 0){
            next = 1 + i / 2;
        } else {
            next = a + b + c;
            a = b;
            b = c;
            c = next;
        }
        result.push_back(next);
    }
    return result;
}