Here is the solution:

vector<int> v = lst;
if(v.size() < 2) return NULL;
sort(v.begin(), v.end());
for(int i=1; i<v.size(); i++){
    if(v[i] != v[0]){
        return v[i];
    }
}
return NULL;