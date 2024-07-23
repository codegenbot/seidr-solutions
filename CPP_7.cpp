int main() {
    assert(issame(filter_by_substring({std::string("grunt"), std::string("trumpet"), std::string("prune"), std::string("gruesome")}, "run"), {std::string("grunt"), std::string("prune")} ));
    return 0;
}