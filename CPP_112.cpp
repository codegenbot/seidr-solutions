int main() {
    auto res = reverse_delete("mamma", "mia");
    assert(issame({res.first}, res.second ? vector<string>({"True"}) : vector<string>({"False"})));
    return 0;
}