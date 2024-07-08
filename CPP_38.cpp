int main() {
    std::string str; // Declare the str variable here
    str = "abcde";
    std::string encoded_str = encode_cyclic(str);
    std::string decoded_str = decode_cyclic(encoded_str);
    assert(decoded_str == str);
    std::cout << "Original: " << str << std::endl;
    std::cout << "Encoded: " << encoded_str << std::endl;
    std::cout << "Decoded: " << decoded_str << std::endl;

    return 0;
}