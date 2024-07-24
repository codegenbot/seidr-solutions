if (text.empty()) {
    return "None";
}

unsigned char result[MD5_DIGEST_LENGTH];
MD5((unsigned char*)text.c_str(), text.length(), result);

stringstream ss;
for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    ss << hex << setw(2) << setfill('0') << (int)result[i];
}

return ss.str();
}