vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int length = target.length();
    for(int i = 0; i <= text.length() - length; i++) {
        bool flag = true;
        for(int j = 0; j < length; j++) {
            if(text[i+j] != target[j]) {
                flag = false;
                break;
            }
        }
        if(flag) {
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}