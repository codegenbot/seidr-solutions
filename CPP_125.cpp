while (pos != txt.length()) {
    result.push_back(txt.substr(0, pos));
    txt.erase(0, pos + 1);
}

while ((pos = txt.find(',')) != std::string::npos) {
    result.push_back(txt.substr(0, pos));
    txt.erase(0, pos + 1);
}