vector<string> odd_count(vector<string> lst){
    vector<string> result;
    int odd_count;
    for(auto str : lst){
        odd_count = 0;
        for(auto ch : str){
            if((ch - '0') % 2 != 0){
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(odd_count) + "\n the string " + str + " of the input.");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(odd_count({"123", "456", "789"}), {"the number of odd elements 2\n the string 123 of the input.", "the number of odd elements 1\n the string 456 of the input.", "the number of odd elements 2\n the string 789 of the input."}));
    return 0;
}