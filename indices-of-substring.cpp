while (pos != std::string::npos) {
    indices.push_back(pos);
    pos = text.find(target, pos + 1);
}