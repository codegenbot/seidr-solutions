for (int i = v.size() - 1; i >= 0; --i) { 
    bool leader = true; 
    for (int j = i + 1; j < v.size(); ++j) { 
        if (v[j] >= v[i]) { 
            leader = false; 
            break; 
        } 
    } 
    if (leader) res.push_back(v[i]);