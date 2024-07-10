int next_smallest(vector<int> lst){
    vector<int> temp = lst;
    sort(temp.begin(), temp.end());
    if (temp.size() < 2) return -1; // Return None as per the problem description
    return temp[1];
}