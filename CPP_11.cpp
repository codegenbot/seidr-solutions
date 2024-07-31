string result = "";
    for(int i=0; i<a.size(); i++){
        result += (a[i] != b[i]) ? '1' : '0';
    }
    return result;
}