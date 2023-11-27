for (int i = 0; i < result.first.size(); i++) {
    std::cout << result.first[i];
    if(i < result.first.size() - 1)
        std::cout << " ";
}

std::cout << std::endl;

for (int i = 0; i < result.second.size(); i++) {
    std::cout << result.second[i];
    if(i < result.second.size() - 1)
        std::cout << " ";
}

std::cout << std::endl;