int main {
    vector<vector<string>> input = {{"grunt", "trumpet", "prune", "gruesome"}};
    string sub = "gru";
    vector<vector<string>> result = filter_by_substring(input, sub);
    for(auto &v : result) {
        for(auto &s : v) {
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
}