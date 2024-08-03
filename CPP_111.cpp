bool issame(const std::map<char, int, std::less<char>, std::allocator<std::pair<const char, int>>>& a, const std::map<char, int, std::less<char>, std::allocator<std::pair<const char, int>>>& b){
    return a == b;
}