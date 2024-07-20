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
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<string> input = {"12345", "67890"};
    vector<string> expected_output = {"the number of odd elements 3\n the string 12345 of the input.", "the number of odd elements 2\n the string 67890 of the input."};
    vector<string> output = odd_count(input);
    assert(issame(output, expected_output));
    return 0;
}