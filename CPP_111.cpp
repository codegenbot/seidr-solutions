if(a.size()!=b.size())
        return false;
    for(auto p:a)
        if(b.find(p.first)!=b.end()&&p.second!=b[p.first])
            return false;
    return true;
}