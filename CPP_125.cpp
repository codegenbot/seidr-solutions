bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}