int run() {
    std::vector<std::pair<std::string, std::string>> extensions;
    extensions.push_back({"Sp", "671235"}); 
    extensions.push_back({"Bb", ""});
    assert(Strongest_Extension(extensions) == "Sp.671235");
    return 0;
}