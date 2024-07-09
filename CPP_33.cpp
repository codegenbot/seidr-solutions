vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int groupCount = 0;

    for (int i : l) {
        if(groupCount >= l.size()) { 
            result.push_back(i);
        } else if(groupCount % 3 == 0) {
            if(groupCount == 0 || l[groupCount - 1] % 3 != i % 3) {
                result.push_back(i);
            }
            groupCount++;
        } else {
            groupCount++;
        }
    }

    return result;
}