int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t found = 0;

    while((found=S.find('.', found))!=string::npos ||
          (found=S.find('?', found))!=string::npos ||
          (found=S.find('!', found))!=string::npos){
        if(S.substr(0, boredom.size()).compare(boredom)==0)
            count++;
        found = found + 1;
    }
    return count;
}