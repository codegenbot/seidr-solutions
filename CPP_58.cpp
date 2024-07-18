// Sort the input vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    // Find common elements using set_intersection
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    
    // Remove duplicates
    result.erase(unique(result.begin(), result.end()), result.end());
    
    return result;
}