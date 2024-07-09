int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // If there are less than two elements in the list or no elements at all, return None
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end()); // Sort the list
    for(int i=0; i<sorted_lst.size()-1; i++) {
        if (sorted_lst[i] < sorted_lst[i+1]) { 
            for(int j=i+2; j<sorted_lst.size(); j++) {
                if(sorted_lst[j]<sorted_lst[i+1]) return sorted_lst[i+1]; // Return the 2nd smallest element
            }
        }
    }
    return -1; // If no such element is found, return None
}