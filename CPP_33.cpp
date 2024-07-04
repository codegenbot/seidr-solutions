vector<int> result = l;
    vector<int> to_sort;
    
    // Collect elements at indices divisible by 3
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            to_sort.push_back(l[i]);
        }
    }
    
    // Sort the collected elements
    sort(to_sort.begin(), to_sort.end());
    
    // Place the sorted elements back into their original positions
    int sort_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            result[i] = to_sort[sort_index++];
        }
    }
    
    return result;
}