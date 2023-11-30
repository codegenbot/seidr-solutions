float median(vector<float> l){
    sort(l.begin(), l.end());
    int size = l.size();
    int middle = size / 2;

    if (size % 2 == 0) {
        return (l[middle - 1] + l[middle]) / 2;
    } else {
        return l[middle];
    }
}