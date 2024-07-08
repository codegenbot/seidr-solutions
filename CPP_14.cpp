int main() {
    std::string str = "WWW";
    std::vector<std::string> result = all_prefixes(str);
    assert(issame({str}, result));
    return 0;
}