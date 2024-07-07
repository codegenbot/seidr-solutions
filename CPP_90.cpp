int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // Return None (in C++ this is equivalent to a special value like -1)
    vector<int>::iterator it = std::min_element(lst.begin(), lst.end());
    vector<int>::iterator it2 = it;
    advance(it2, 1);
    if(it2 != lst.end()) return *it2; 
    else return -1; // This should not happen according to the problem statement
}