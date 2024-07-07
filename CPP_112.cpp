int main() {
    std::vector<std::string> vec1 = reverse_delete("mamma", "mia");
    std::vector<std::string> vec2({vec1[0], vec1[1]});
    assert(issame(vec1, vec2));
    return 0;
}