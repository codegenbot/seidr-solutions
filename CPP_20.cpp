if (a.size() != b.size())
        return false;
    return std::equal(a.begin(), a.end(), b.begin(),
                      [](float x, float y){return std::abs(x - y) <= std::numeric_limits<float>::epsilon();});
}