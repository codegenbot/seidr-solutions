Here is the completed code:

bool will_it_fly(vector<int> q,int w){
    int sum = 0;
    for(int i = 0; i < q.size(); i++){
        sum += q[i];
    }
    if(sum > w) return false;
    string str = "";
    for(int i = 0; i < q.size(); i++){
        str += to_string(q[i]);
    }
    if(str != stringify(reverse(q))) return false;
    return true;
}
string stringify(vector<int> v){
    string s = "";
    for(int i = 0; i < v.size(); i++){
        s += to_string(v[i]);
    }
    return s;
}