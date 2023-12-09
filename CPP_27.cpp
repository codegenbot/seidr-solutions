```
string flip_case(const string& str) {
    return str.swapcase();
}

int main() {
    string input_string = "These violent delights have violent ends";
    assert(flip_case(input_string) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}
```