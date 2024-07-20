vector<int>::iterator it;

if (lst.size() < 2) {
    return nullptr;
}

sort(lst.begin(), lst.end());
it = unique(lst.begin(), lst.end());

if (std::distance(it, lst.end()) < 2) {
    return nullptr;
}

return *(it + 1);