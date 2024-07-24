if(text.empty())
    return "None";

unsigned char digest[16];
MD5((const unsigned char*)text.c_str(), text.length(), digest);

char md5_hash[32];
for(int i = 0; i < 16; i++)
    sprintf(&md5_hash[i*2], "%02x", (unsigned int)digest[i]);

return string(md5_hash);