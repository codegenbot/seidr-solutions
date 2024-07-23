vector<int> res = l;
    for(int i = 0; i < l.size(); ++i){
        if(i % 3 == 0){
            int start = i;
            int end = min((int)l.size(), i + 3);
            sort(res.begin() + start, res.begin() + end);
        }
    }
    return res;
}