std::string ss;
for (int i = 0; i < 16; i++) {
    ss << setfill(2) << right << hex << (int)md5[i];
}
return std::string(ss.str());