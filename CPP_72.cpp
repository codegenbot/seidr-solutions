bool will_it_fly(std::vector<int> q, int w) {
    bool isPalindromic = true;
    std::string str = "";
    for(int i : q) {
        str += std::to_string(i);
    }
    if(str != std::string(str.rbegin(), str.rend()))
        isPalindromic = false;
    int sum = 0;
    for(int i : q) {
        sum += i;
    }
    return isPalindromic && sum <= w;
}