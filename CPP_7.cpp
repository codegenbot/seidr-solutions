int main(){
    vector<string> output = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    for(auto s : output){
        cout << s << endl;
    }
    return 0;
}