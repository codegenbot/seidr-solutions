for (std::size_t i = 0; i <= text.size() - target.size(); ++i) {
    if (text.substr(i, target.size()) == target)
        indices.push_back(i);
}