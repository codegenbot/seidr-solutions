float median(vector<float> l){
    sort(l.begin(), l.end());
    int size = l.size();
    if (size % 2 == 0){
        int mid1 = size / 2 - 1;
        int mid2 = size / 2;
        return (l[mid1] + l[mid2]) / 2;
    } else {
        return l[size / 2];
    }
}