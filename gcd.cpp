vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int len = target.length();
    for(int i=0; i<=text.length()-len; i++){
        bool found = true;
        for(int j=0; j<len; j++){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found) indices.push_back(i);
    }
    return indices;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}