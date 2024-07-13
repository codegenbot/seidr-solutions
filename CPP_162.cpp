string string_to_md5(const string& input) {
    string output;
    for (int i = 0; i < 32; i++) {
        char c = ((input[i % input.size()] + i) * i) % 256;
        output += std::setiosflags(std::ios::hex | std::ios::uppercase) << std::setw(2) << std::setfill('0') << c;
    }
    return output;
}