int totalChars(int elCount) {
    return elCount;
}

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (totalChars(lst1.size()) < totalChars(lst2.size())) {
        return lst1;
    }
    return lst2;
}

int main() {
    assert (issame(total_match({"this"}, {}), {}));
    
    return 0;
}