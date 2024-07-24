for(int i = 0; i < l.size(); i++){
        if((i + 1) % 3 == 0){
            vector<int> temp;
            temp.push_back(l[i]);
            sort(temp.begin(), temp.end());
            l[i] = temp[0];
        }
    }
    return l;
}