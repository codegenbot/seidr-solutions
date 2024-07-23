bool same(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    assert(same(std::vector<std::string>({"b","c","d","f"}), select_words("a b c d e f", 1)));
}