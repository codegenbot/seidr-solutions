char digest[MD5_DIGEST_LENGTH];
if (text.empty()) {
    return "None";
}

MD5((unsigned char*)text.c_str(), text.length(), (unsigned char*)&digest);

char mdString[33];
for(int i = 0; i < 16; i++) {
    sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
}

return string(mdString);
}