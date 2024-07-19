string result = a;
    for(int i=0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result[i] = '0';
        } else {
            result[i] = '1';
        }
    }
    return result;
}