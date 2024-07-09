```cpp
bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

// add the last group
if (open_count > 0) {
    while (open_count > 0) {
        current_group += ')';
        open_count--;
    }
    result.push_back(current_group);
} else if (!issame(last_group, expected)) {
    result.push_back(last_group);
}