```cpp
int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1;
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    int second_smallest = (copy.size() > 1)? copy[1] : -1; 
    for(int i=0;i<lst.size();i++){
        if(lst[i]>second_smallest){
            cout<<"Error: The number "<<lst[i]<<" is greater than the next smallest number, which is "<<second_smallest<<".";
            return -1;
        }
    }
    return second_smallest;
}