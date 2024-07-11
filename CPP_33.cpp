for(int i=0; i<l.size(); i++){
        if(i%3 == 0){
            vector<int> temp;
            for(int j=i; j<min(i+3, (int)l.size()); j++){
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for(int j=i; j<min(i+3, (int)l.size()); j++){
                l[j] = temp[j-i];
            }
        }
    }
    return l;
}