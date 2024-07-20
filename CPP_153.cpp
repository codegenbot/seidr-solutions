int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string strongest_ext = "";
    for (auto ext : extensions) {
        int cap = count(ext.begin(), ext.end(), towupper);
        int sm = count(ext.begin(), ext.end(), tolower);
        double strength = static_cast<double>(cap - sm) / (cap + sm);
        if (strength > strongest) {
            strongest = strength;
            strongest_ext = ext;
        }
    }
    return class_name + "." + strongest_ext;
}