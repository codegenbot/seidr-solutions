sort(str.begin(), str.end());
str.erase(unique(str.begin(), str.end()), str.end());
return str.size();
}