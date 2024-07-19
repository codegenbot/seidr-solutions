for(char &c : s){
    if(isalpha(c)){
        if(islower(c)){
            c = toupper(c);
        } else {
            c = tolower(c);
        }
    }
}

size_t start = 0;
size_t end = s.size() - 1;
while(start < end){
    swap(s[start], s[end]);
    start++;
    end--;
}

return s;