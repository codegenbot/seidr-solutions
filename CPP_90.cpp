Here is the solution:

int next_smallest(vector<int> lst){
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    
    if(sorted_lst.size() < 2) return -1; // No second smallest number.
    else return *next(iterate(sorted_lst).drop(1));
}