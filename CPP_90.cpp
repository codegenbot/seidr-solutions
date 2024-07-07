vector<int>::iterator it = std::next(std::unique(lst.begin(), lst.end()), 0);

return it != lst.end() ? *it : NULL;