bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) 
        return false;
    
    for(int i = 0; i < v1.size(); ++i)
        if(v1[i] != v2[i])
            return false;
    
    return true;
}

int main() {
    vector<int> arr = {1, 3, 5};
    vector<string> result = by_length(arr);
    vector<string> arr2 = {1, 4, 9};
    vector<string> result2 = by_length(arr2);

    if (issame(result, result2)) 
        cout << "The output vectors are same.\n";
    else
        cout << "The output vectors are not the same.\n";

    return 0;
}