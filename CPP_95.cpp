map<string, int> count;
for (auto &entry : dict) {
    if (!islower(entry.first[0])) {
        return false;
    }
    count[entry.first]++;
    if (count[entry.first] > 1) {
        return false;
    }
}
return true;