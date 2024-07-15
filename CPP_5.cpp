for (auto it = numbers.begin(); it != numbers.end(); ++it) {
    if (it != numbers.begin()) {
        numbers.insert(it, delimeter);
        ++it;
    }
}

return numbers;