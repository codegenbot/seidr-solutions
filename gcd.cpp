vector<int> indices(string text, string target) {
    vector<int> result;
    int len = target.size();
    for(int i=0; i<=text.size()-len; i++){
        if(text.substr(i,len)==target){
            result.push_back(i);
            // check if the target overlaps at previous indices
            while(i+len<=text.size() && text.substr(i,len)==target)
                i++;
        }
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}