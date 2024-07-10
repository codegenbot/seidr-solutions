vector<int>::iterator it = unique(lst.begin(), lst.end());
if(it != lst.end()) {
    vector<int>::iterator second_smallest = prev(it);
    if(std::next(second_smallest) != lst.end()){
        return *second_smallest;
    }
}
return -1; // or any value you want to represent "None"