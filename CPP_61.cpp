int main() {
    string input;
    cin >> input;
    cout << (correct_bracketing(input) ? "true" : "false") << endl;
}
bool correct_bracketing(string brackets){
    int count = 0;
    for(int i=0; i<brackets.size(); i++){
        if(brackets[i] == '(')
            count++;
        else
            if(count <= 0)
                return false;
            else
                count--;
    }
    return count==0;
}