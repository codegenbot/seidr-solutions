vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    for(int i : lst){
        if(i < 0 && (result[1] == 0 || i > result[0])){
            result[0] = i;
        }
        else if(i > 0 && (result[0] == 0 || i < result[1])){
            result[1] = i;
        }
    }
    return result;
}