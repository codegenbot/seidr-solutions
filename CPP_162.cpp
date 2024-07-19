```cpp
int main() {
    std::string result = string_to_md5("password");
    assert(result == "5d41402abc4e666f1db980f71b7aca3");
    return 0;
}

std::string string_to_md5(std::string input) {
    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(result, &ctx);

    char output[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", result[i]);
    }
    return std::string(output);
}