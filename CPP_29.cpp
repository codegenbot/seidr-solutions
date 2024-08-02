```cpp
bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    assert(issame({{"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}}, {"xxx", "xxxAAA", "xxx"}, "xxx") );
}