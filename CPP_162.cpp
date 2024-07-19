if (text.empty()) {
    return "None";
}

unsigned char digest[MD5_DIGEST_LENGTH];
MD5((unsigned char*)text.c_str(), text.length(), digest);

char md5Hash[2 * MD5_DIGEST_LENGTH + 1];
for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
}

return string(md5Hash);
}