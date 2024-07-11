int main(){
    vector<int> lst;
    cout<<"Enter elements for list (space separated): ";
    string input;
    getline(cin,input);
    size_t pos = 0;
    while((pos=input.find(" "))!=-1){
        int val = stoi(input.substr(0,pos));
        lst.push_back(val);
        input.erase(0,pos+1);
    }
    int val =stoi(input);
    lst.push_back(val);
    
    bool result = is_sorted(lst);
    if(result)
        cout<<"The list is sorted.\n";
    else
        cout<<"The list is not sorted.\n";
    
    return 0;
}

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                count++;
            }
        }
        if(count > 1){
            return false;
        }
    }
    return true;
}