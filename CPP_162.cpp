Here is the solution:

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &ctx);
    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << static_cast<int>(result[i]);
    }
    return oss.str();
}