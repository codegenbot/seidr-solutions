```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    vector<string> filtered_a = filter_by_substring(a, "same");
    vector<string> filtered_b = filter_by_substring(b, "same");

    if(filtered_a.size() != filtered_b.size()) {
        return false;
    }

    for(string s : filtered_a) {
        if(find(filtered_b.begin(), filtered_b.end(), s) == filtered_b.end())
            return false;
    }
    
    return true;
}

int main(){
    vector<string> a = {"same", "not same1", "same2"};
    vector<string> b = {"same3", "same4", "same5"};

    if(issame(a, b))
        cout << "a and b are the same" << endl;
    else
        cout << "a and b are not the same" << endl;

    return 0;
}