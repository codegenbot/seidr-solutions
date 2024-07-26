float num = std::stof(value);
    return num >= 0 ? std::floor(num + 0.5) : std::ceil(num - 0.5);
}