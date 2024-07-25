Here is the completed code:

vector<int> next_smallest(vector<int> lst) {
    if (lst.size() < 2) return vector<int>();

    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    for(int i = 0; i < sorted.size(); ++i){
        if(i+1 < sorted.size() && sorted[i] == sorted[i+1]){
            return vector<int>();
        }
    }

    int secondSmallestIndex = -1;
    for(int i = 1; i < sorted.size(); ++i){
        if(secondSmallestIndex == -1 || sorted[i] > sorted[secondSmallestIndex]){
            secondSmallestIndex = i;
        } else {
            break;
        }
    }

    return vector<int>{sorted[secondSmallestIndex]};
}