bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        int posA = -1;
        int posB = -1;

        for (int j = 0; j < planets.size(); j++) {
            if (planets[j] == a[i]) posA = j;
            else if (planets[j] == b[i]) posB = j;
        }

        if ((posA < index1 && posB >= index1) || (posA >= index2 && posB < index2))
            return false;
    }
    return true;
}