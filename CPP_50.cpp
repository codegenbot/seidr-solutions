```cpp
string encode_shift(const string& str) {
    // your implementation here
}

string decode_shift(const string& encoded_str) {
    // your implementation here
}

int main() {
    // test the encode_shift and decode_shift functions
    string str = "hello";
    cout << "Encoded: " << encode_shift(str) << endl;
    string encoded_str = encode_shift(str);
    assert (decode_shift(encoded_str) == str);
    return 0;
}
```