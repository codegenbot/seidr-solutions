while (pos != text.length()) {
    pos = text.find(target, pos);
    if (pos == std::string::npos) break;
    indices.push_back(pos);
    pos += (target.length() > 0 ? target.length() : 1);
}