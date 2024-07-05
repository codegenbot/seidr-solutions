vector<int> sort_third(vector<int> l){
    vector<int> divisible_by_three;
    
    // Collect elements at indices divisible by three
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            divisible_by_three.push_back(l[i]);
        }
    }
    
    // Sort the collected elements
    sort(divisible_by_three.begin(), divisible_by_three.end());
    
    // Replace the elements at indices divisible by three with the sorted ones
    int sorted_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = divisible_by_three[sorted_index++];
        }
    }
    
    return l;
}