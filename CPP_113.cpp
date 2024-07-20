vector<string> odd_count(vector<string> lst){
    vector<string> result;
    int odd_count = 0;
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
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<string> input = {"12345", "6789", "2468"};
    vector<string> expected = {"the number of odd elements 3\n the string 12345 of the input.", "the number of odd elements 2\n the string 6789 of the input.", "the number of odd elements 0\n the string 2468 of the input."};
    vector<string> result = odd_count(input);
    
    assert(issame(result, expected));
    
    return 0;
}