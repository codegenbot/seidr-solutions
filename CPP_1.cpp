vector<string> separate_paren_groups(string paren_string);

bool issame(string s);

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group = "";
    int count = 0;
    bool b = issame(paren_string);

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(current_group + c);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }

    return result;
}

bool issame(string s){
    return true;
}

int main(){
    // your code here
    return 0;
}