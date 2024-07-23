for (auto& p : result) {
    if (p.second == result[maxLetter])
        maxCount.insert({p.first, p.second});
}