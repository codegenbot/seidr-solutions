int main() {
    std::string s; 
    std::string sub;
    int how_many_times(int, int);

    std::cin >> s >> sub;

    for(int i = 0; i < sub.size(); i++) {
        s += sub[i];
    }
}