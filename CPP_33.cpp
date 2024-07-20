for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            vector<int> temp;
            for(int j = i; j < l.size(); j+=3){
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for(int j = i; j < l.size(); j+=3){
                l[j] = temp[j/3];
            }
        }
    }
    return l;
}