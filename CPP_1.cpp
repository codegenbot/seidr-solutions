bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string);

int main() {
    // main function code here
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string temp;
    int count = 0;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                temp += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                temp += c;
            } else if (count == 0) {
                result.push_back(temp);
                temp = "";
            }
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // issame function code here
}