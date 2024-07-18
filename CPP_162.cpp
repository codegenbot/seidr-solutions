if(text.empty()) {
    return "None";
}

unsigned char result[MD5_DIGEST_LENGTH];
MD5((const unsigned char*)text.c_str(), text.length(), result);

char md5str[2*MD5_DIGEST_LENGTH+1];
for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    sprintf(&md5str[i * 2], "%02x", (unsigned int)result[i]);
}

return string(md5str);
}