if (text.empty()) {
        return "None";
    }

    unsigned char md5_hash[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), md5_hash);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)md5_hash[i]);
    }

    return mdString;
}