string str;

MD5_CTX md5;
MD5_Init(&md5);
unsigned char result[16];

if (text.empty()) {
    return "";
}

MD5_Update(&md5, text.c_str(), text.size());
MD5_Final(result, &md5);

ostring s = ostringstream();
for(int i=0; i<16; i++) {
    s << setfill('0') << setw(2) << hex << (int)result[i];
}
return s.str();