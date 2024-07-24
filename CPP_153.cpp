Here is the completed code:

int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = -1e9;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int upper_count = 0;
        int lower_count = 0;
        
        for (char c : extension) {
            if (::isupper(c)) {
                upper_count++;
            } else if (::islower(c)) {
                lower_count++;
            }
        }

        if ((int)(extension.size() - (long long)lower_count) > max_strength) {
            max_strength = extension.size() - lower_count;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}