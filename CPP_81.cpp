bool issame(std::vector<std::string> a, std::vector<std::string> grades){
    if(a.size()!=grades.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i] != grades[i])
            return false;
    return true;
}