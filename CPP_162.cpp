```cpp
std::string string_to_md5(const std::string& input) {
    MD5_CTX ctx;
    unsigned char result[16];
    unsigned char* ptr = (unsigned char*)malloc(16);
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(ptr, &ctx);
    free(ptr);

    char output[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", ptr[i]);
    }
    return std::string(output);
}