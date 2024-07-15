Here is the completed code:

vector<int> next_smallest(vector<int> lst) {
    vector<int> temp = lst;
    if(temp.size() < 2){
        return {};
    }
    sort(temp.begin(),temp.end());
    if(temp[1] == temp[0]){
        return {};
    }
    return {temp[1]};
}