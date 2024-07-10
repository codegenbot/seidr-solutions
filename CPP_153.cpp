int Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for (const auto &extension : extensions) {
        int cap = count(extension.begin(), extension.end(), 'A' | 'E' | 'H' | 'I' | 'J' | 'K' | 'L' | 'M' | 'N' | 'O' | 'P' | 'Q' | 'R' | 'S' | 'T' | 'U' | 'V' | 'W' | 'X' | 'Y');
        int sm = extension.size() - cap;
        if (cap - sm > max_strength) {
            max_strength = cap - sm;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}