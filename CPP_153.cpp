int run() {
    std::vector<std::pair<std::string, std::string>> extensions = {{"Sp", "671235"}, {"Bb", ""}}; 
    assert(Strongest_Extension(extensions) == "Sp.671235");
    return 0;
}