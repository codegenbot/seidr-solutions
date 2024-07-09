Here is the solution:

vector<int> result = {lst[0]};

for(int i=1; i<lst.size(); i++){
    if(lst[i] < result[0]){
        result.clear();
        result.push_back(lst[i]);
        result.push_back(result[0]);
    }
}

if(result.size() == 1) return nullptr;
return result[1];