vector<string> odd_count(vector<string> lst);

int odd_count(string s){
    int count = 0;
    for(char c : s){
        if((c - '0') % 2 != 0){
            count++;
        }
    }
    return count;
}

bool issame(vector<string> a, vector<string> b){
    return odd_count(a[0]) == odd_count(b[0]);
}

int main(){
    vector<string> result;
    vector<string> lst = {"271", "137", "314"};
    for(string s : lst){
        int count = odd_count(s);
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + s + " of the input.");
    }
    for(string s : result){
        cout << s << endl;
    }
    return 0;
}