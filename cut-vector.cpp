for (i = 0; i < cutIndex; i++) {
    std::cout << nums[i] << std::endl;
}

for (i = cutIndex; i < n; i++) {
    std::cout << nums[i] << std::endl;
}

if (minDiff == INT_MAX) {
    std::cout << "No valid cut found." << std::endl;
}
return 0;