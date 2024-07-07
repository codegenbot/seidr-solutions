vector<int>::iterator it = next(cbegin(lst), 1);
if (it == cend(lst)) {
    return -1; // or any value that represents None in your language
}
return *it;