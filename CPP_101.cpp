bool issame(vector<string> a,vector<string>b){
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

int main(){
    vector<string> v1 = words_string("Hello world, this is a test");
    vector<string> v2 = words_string("This is a test, hello world");
    cout << issame(v1,v2)<<endl;
    return 0;
}