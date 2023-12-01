vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.compare(0, prefix.length(), prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    string prefix;
    cin>>prefix;

    vector<string> strings;
    string str;
    while(cin>>str){
        strings.push_back(str);
    }

    vector<string> filtered_strs = filter_by_prefix(strings, prefix);
    for(const auto& str : filtered_strs){
        cout<<str<<endl;
    }

    return 0;
}