bool issame(vector<string> a,vector<string>b){
    return (a == b);
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<string> result = by_length(arr);
    if(issame(result, {"One","Two","Three","Four","Five"}))
        cout<<"The output is correct.\n";
    else
        cout<<"The output is incorrect.\n";

    return 0;
}