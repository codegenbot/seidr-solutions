if (target.empty()) {
    std::cout << "Target string is empty." << std::endl;
    return 0;
}

while ((pos = text.find(target, pos)) != std::string::npos) {
    indices.push_back(pos);
    pos += (target.length() == 1) ? 1 : 0; // Handle overlapping targets
}