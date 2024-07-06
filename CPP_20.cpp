if (a.size() != b.size())
        return false;
    auto equal_pred = [&](float x, float y){return std::abs(x - y) <= std::numeric_limits<float>::epsilon();};
    return std::equal(a.begin(), a.end(), b.begin(), b.end(), equal_pred);
}