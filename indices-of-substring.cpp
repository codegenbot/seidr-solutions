found = 0;
size_t pos = 0;
while ((pos = text.find(target, pos)) != std::string::npos) {
    indices.push_back(pos);
    ++pos;
    found = 1;
}

std::cout << found << std::endl;