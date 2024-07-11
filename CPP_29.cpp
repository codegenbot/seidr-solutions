bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        bool ismatch = false;
        for(string s : a[i].split(' ')) {
            if(find(b[i].begin(), b[i].end(), s) == b[i].end())
                break;
            else
                ismatch = true;
        }
        if(!ismatch)
            return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_prefix({"apple apple juice", "banana milk", "cherry milk"}, " "), 
                   filter_by_prefix({"banana juice", "mango smoothie", "grapes fruit salad"}, " ")) == true);
    
    return 0;
}