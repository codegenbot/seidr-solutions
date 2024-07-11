string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = extensions[0].size() - count_if(extensions[0].begin(), extensions[0].end(), islower);
    
    for (const auto& extension : extensions) {
        int strength = extension.size() - count_if(extension.begin(), extension.end(), islower);
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}