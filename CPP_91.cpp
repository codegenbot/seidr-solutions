int main() {
    std::string S;
    // read input from user...

    int count = 0;
    int pos = 0; 
    while (pos != string::npos) { 
        pos = S.find("I", pos);
        if (pos != string::npos) {
            if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
                count++;
            }
            pos = S.find("I", pos);
        } else {
            break;
        }
    }
    return 0; 
}