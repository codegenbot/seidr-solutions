int main() {
    std::string s; 
    std::string sub;
    std::cin >> s >> sub;
    
    for(int i = 0; i < sub.size(); i++) {
        s += sub[i];
    }
}