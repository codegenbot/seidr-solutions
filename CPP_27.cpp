string filp_case(string str) {
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::islower(c))
            result += std::toupper(c);
        else if(std::isupper(c))
            result += std::tolower(c);
        else
            result += c;
    }
    return result;
}

int main() {
    assert (filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    // ... rest of your code
}