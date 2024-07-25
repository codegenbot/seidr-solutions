if (text.empty()) {
    return "None";
}

unsigned char digest[MD5_DIGEST_LENGTH];
MD5((unsigned char*)text.c_str(), text.length(), digest);

char mdString[(MD5_DIGEST_LENGTH * 2) + 1];
for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
}

return string(mdString);
}