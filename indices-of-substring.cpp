if (!target.empty() && text.size() >= target.size()) {
    size_t pos = text.find(target, 0);
    
    if (!target.empty()) {
        while (pos != std::string::npos) {
            indices.push_back(pos);
            pos = text.find(target, pos + 1);
        }
    } else {
        for (size_t i = 0; i < text.size(); ++i) {
            indices.push_back(i);
        }
    }
}