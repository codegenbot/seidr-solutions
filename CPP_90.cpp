Here is the completed code:

int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None
    vector<int>::iterator it = lst.begin();
    advance(it, 1);
    return *it;
}