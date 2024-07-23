bool issame(vector<string> a,vector<string> b){
    return a.size() == b.size();
}

int main(){
    assert(issame(total_match({"this"}, {}), {}));
}