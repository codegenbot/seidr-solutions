bool isSame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    assert (isSame(select_words("a b c d e f", 1) , vector<string>{ "b", "c", "d", "f"}));
    return 0;
}