int main() {
    string text;
    getline(cin,text);
    for(int i=0; i<text.length(); i++) {
        if(text[i] == ' ') {
            if(i+1 < text.length() && text[i+1] == ' ' && text.find(' ',i+2) - i <= 2) {
                continue;
            } else if(i>0 && text[i-1] == ' ' && text[i] == ' ' && text[i+1] == ' ') {
                text.replace(i,3,"-");
                i+=2;
                continue;
            }
            text.replace(i,1,"_");
        }
    }
    cout<<text<<endl;
    return 0;
}