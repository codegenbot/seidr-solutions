sort(l.begin(), l.end());
l.erase(unique(l.begin(), l.end(), issame), l.end());
return l;