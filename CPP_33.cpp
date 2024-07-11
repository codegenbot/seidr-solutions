vector<int> div_three;
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            div_three.push_back(l[i]);
        }
    }
    sort(div_three.begin(), div_three.end());
    int j = 0;
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            l[i] = div_three[j++];
        }
    }
    return l;
}