bool issame(vector<string> a,vector<string>b){
    return (a == b);
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<string> result = by_length(arr);
    for(string s : result) {
        cout << s << " ";
    }
    if(issame(by_length({5}),by_length({}))) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}