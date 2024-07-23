vector<string> compareTwoVectors(vector<string> vec1, vector<string> vec2) {
    if(vec1.size() != vec2.size()) {
        return {};
    }
    for(int i = 0; i < vec1.size(); i++) {
        if(vec1[i] != vec2[i]) {
            return {};
        }
    }
    return {"Equal"};
}