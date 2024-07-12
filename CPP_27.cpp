std::string filp_case(std::string str) {
    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result += (char)(str[i] + ('A' - 'a'));
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            result += (char)(str[i] - ('A' - 'a'));
        } else {
            result += str[i];
        }
    }
    return result;
}