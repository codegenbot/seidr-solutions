bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::map<int, std::string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                             {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    std::vector<std::string> result;
    for(int i : arr){
        if(i >= 1 && i <= 9)
            result.push_back(numToName[i]);
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    // Define and use by_length
    vector<int> arr = {9, 4, 8};
    vector<string> result = by_length(arr);
    assert(issame(result, {"Nine", "Eight", "Four"}));
    return 0;
}