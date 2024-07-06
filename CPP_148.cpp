bool issame(vector<string> a,vector<string>b){
    for(int i=0;i<a.size()&&!b.empty();i++){
        if(find(b.begin(),b.end(),a[i])!=b.end())
            b.erase(remove(b.begin(),b.end(),a[i]),b.end());
        else
            return false;
    }
    return b.empty();
}

int main{
    string planet1, planet2;
    cin >> planet1 >> planet2;
    vector<string> bf = BF(planet1, planet2);
    for (auto str : bf) {
        cout << str << endl;
    }
}