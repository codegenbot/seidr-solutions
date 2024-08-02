Here is the solution:

vector<int> result = {};
if(lst.size() < 2){
    return result;
}
sort(lst.begin(), lst.end());
for(int i=1; i<lst.size(); i++){
    if(lst[i] != lst[0]){
        result.push_back(lst[i]);
        break;
    }
}
return result.empty()? None : result;