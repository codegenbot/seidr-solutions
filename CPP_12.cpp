vector<string>::iterator it = strings.end();
for(auto s : strings) {
    if(s.length() > it->length()) {
        it = &s;
    }
}
return *it == strings.end() ? "" : *it;