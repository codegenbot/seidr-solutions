#define MD5_DIGEST_LENGTH 16

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return mdString;
}