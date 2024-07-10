```cpp
int main() {
    std::vector<std::string> result = select_words("a b c d e f", 1);
    assert(issame({{"b"}}, "b")); 
    std::cout << "{" + Join(result, ", ") + "}" << std::endl;
    return 0;
}