unsigned char buffer[16];
MD5_CTX md5ctx;
MD5Init(&md5ctx);
if (!text.empty()) {
    MD5Update(&md5ctx, text.c_str(), text.size());
}
MD5Final(buffer, &md5ctx);
ostring result;
for (int i = 0; i < 16; ++i) {
    sprintf(result.str().data(), "%02x", buffer[i]);
}
return result;