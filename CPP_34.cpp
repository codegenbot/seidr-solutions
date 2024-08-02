Here is the solution:

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}