```cpp
bool same_chars(string s0, string s1) {
    return s0 == s1;
}
int main() {
    assert (same_chars("aabb", "aaccc") == false);
    return 0;
}