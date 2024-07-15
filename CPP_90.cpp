int next_smallest(vector<int> lst){
    if(lst.size() < 2) return NULL; // If vector size is less than 2, it's not possible to have a second smallest number
    sort(lst.begin(), lst.end()); // Sort the vector in ascending order
    for(int i=0; i<lst.size()-1; i++){
        if(lst[i] != lst[i+1]){ 
            return lst[i+1]; // Return the second smallest element, which is the first occurrence of a different number from the current one
        }
    }
    return NULL; // If all numbers in the vector are the same, there's no second smallest number
}