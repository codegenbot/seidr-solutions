int totalChars(const vector<string>& lst) {
    int total = 0;
    for(const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(vector<string> a, vector<string> b){
    return totalChars(a) == totalChars(b);
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if(totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}

int main(int argc, char** argv) {
    assert(issame({"this"}, {}));
    
    return 0;
}