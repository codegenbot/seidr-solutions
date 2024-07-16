vector<float> l_even;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0) l_even.push_back(l[i]);
    }
    sort(l_even.begin(), l_even.end());
    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0) l[i] = l_even[j++];
    }
    return l;
}