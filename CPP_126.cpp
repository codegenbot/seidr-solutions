// Sort the vector
    sort(lst.begin(), lst.end());

    // Check for duplicates
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] == lst[i-1]){
            return false;
        }
    }

    // Check if vector is sorted
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] < lst[i-1]){
            return false;
        }
    }

    return true;
}