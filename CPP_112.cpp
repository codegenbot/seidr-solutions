```cpp
std::vector<std::string> v = {"", "True"};
assert(issame(reverse_delete("mamma", "mia"), reverse_delete(v[0], v[1]).c_str()));