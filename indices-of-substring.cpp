while (pos != std::string::npos && pos <= text.size()) {
    indices.push_back(pos);
    pos = text.find(target, pos + 1);
}