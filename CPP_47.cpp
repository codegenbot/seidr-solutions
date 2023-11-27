float median(vector<float> l){
    sort(l.begin(), l.end());
    int size = l.size();
    if(size % 2 == 0){
        return (l[size/2 - 1] + l[size/2]) / 2;
    }
    else{
        return l[size/2];
    }
}