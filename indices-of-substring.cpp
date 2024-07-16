std::vector<int> indices;

for (size_t i = 0; (i = text.find(target, i)) != std::string::npos; ++i) {
    indices.push_back(i);
}