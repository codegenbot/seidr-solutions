unsigned char buffer[16];
MD5_CTX ctx;
MD5_Init(&ctx);
MD5_Update(&ctx, text.c_str(), text.length());
MD5_Final(buffer, &ctx);

string result = "";
for(int i=0; i<16; i++) {
    stringstream sstream;
    sstream << setfill('0') << setw(2) << hex << (int)buffer[i];
    result += sstream.str();
}

return result;