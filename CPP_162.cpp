MD5_CTX md5context;
unsigned char result[16];
MD5Init(&md5context);
if(text.empty()) {
    return "";
}
MD5Update(&md5context, (const unsigned char*)text.c_str(), text.length());
MD5Final(result, &md5context);

string output;
for(int i = 0; i < 16; i++) {
    sprintf(buffer, "%02x", result[i]);
    output += buffer;
}

return output;