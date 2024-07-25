if (text.empty()) {
    return "None";
}

unsigned char digest[MD5_DIGEST_LENGTH];
MD5((unsigned char*)text.c_str(), text.length(), digest);

char mdString[33];
for(int i = 0; i < 16; i++) {
    sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
}

return mdString;
}