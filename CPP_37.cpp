```cpp
std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even, odd;

    for (float i : l) {
        if (i % 2 == 0) 
            even.push_back(i);
        else
            odd.push_back(i);
    }

    // Sort the two vectors separately based on their parity.
    if (!even.empty())
        std::sort(even.begin(), even.end());
    if (!odd.empty())
        std::sort(odd.begin(), odd.end());

    return {begin(even), begin(even) + size(even)}, {begin(odd), begin(odd) + size(odd)}));
}