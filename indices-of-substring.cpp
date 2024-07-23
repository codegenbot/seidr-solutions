int main(){
    string text, target;
    cin >> text >> target;
    vector<int> indices;
    if(target.empty()){
        return 0;
    }
    for(int i = 0; i <= (int)text.length() - (int)target.length(); ++i){
        if(text.substr(i, target.length()) == target){
            indices.push_back(i);
        }
    }
    for(int i : indices){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}