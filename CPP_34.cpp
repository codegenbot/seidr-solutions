auto unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    #include <algorithm>
    auto result = std::vector<int>(std::unique_copy(first, last), first, last);
    return result;
}

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && (a == b);
}