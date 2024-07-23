for(int i = 0; i < l.size(); ++i) {
    if((i+1)%3 == 0){
        vector<int> temp{l.begin() + i - 2, l.begin() + i + 1};
        sort(temp.begin(), temp.end());
        l.erase(l.begin() + i - 2, l.begin() + i + 1);
        l.insert(l.begin() + i - 2, temp.begin(), temp.end());
    }
}
return l;
}