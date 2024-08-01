std::sort(l.begin(), l.end());
l.erase(std::unique(l.begin(), l.end(), issame), l.end());
return l;