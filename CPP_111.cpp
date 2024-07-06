if(a.size()!=b.size())return false;
    for(auto p:a){
        if(!b.count(p.first) || b.at(p.first)!=p.second)return false;
    }
    return true;
}