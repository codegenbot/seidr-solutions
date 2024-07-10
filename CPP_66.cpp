```cpp
int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            std::string temp = std::string(1, c);
            while(std::next_permutation(temp.begin(), temp.end())) {
                for(char d : temp) {
                    sum += tolower(d) - 'a' + 1;
                }
            }
        } else if (islower(c)) {
            sum += c - 'a' + 1; 
        }
    }
    return sum;
}