```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    bool result = issame(words_string("hello world"), {"hello", "world"});
    return 0;
}