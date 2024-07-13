string output;
for (int i = 0; i < 32; i++) {
    char c = ((input[i % input.size()] + i) * i) % 256;
    if (i == 0)
        output += std::hex << std::setw(2) << static_cast<int>(c);
    else
        output += std::hex << std::setw(2) << static_cast<int>(c);
}
return output;