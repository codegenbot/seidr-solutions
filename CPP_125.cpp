bool issame(vector<string> a, vector<string> b);

int main(){
    assert(issame(split_words(""), {"0"}));
    return 0;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}