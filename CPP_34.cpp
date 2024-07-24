sort(l.begin(), l.end());
l.erase(unique(l.begin(), l.end()), l.end());
return l;