if(text.empty()) {
        return "None";
    }

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    std::string md5_hash;
    char buf[MD5_DIGEST_LENGTH * 2 + 1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(buf + i * 2, "%02x", result[i]);
    }
    buf[MD5_DIGEST_LENGTH * 2] = '\0';
    md5_hash = buf;

    return md5_hash;
}