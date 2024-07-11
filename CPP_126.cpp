vector<int> no_duplicates(lst.begin(), lst.end());
    sort(no_duplicates.begin(), no_duplicates.end());
    
    for (int i = 0; i < no_duplicates.size() - 1; i++) {
        if (no_duplicates[i] == no_duplicates[i + 1])
            return false;
    }
    
    return lst == no_duplicates;
}