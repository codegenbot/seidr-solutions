string result = class_name + "." + extensions[0];
    int max_strength = count_if(extensions[0].begin(), extensions[0].end(), ::isupper) - count_if(extensions[0].begin(), extensions[0].end(), ::islower);

    for (int i = 1; i < extensions.size(); ++i) {
        int strength = count_if(extensions[i].begin(), extensions[i].end(), ::isupper) - count_if(extensions[i].begin(), extensions[i].end(), ::islower);
        if (strength > max_strength || (strength == max_strength && extensions[i] < extensions[0])) {
            result = class_name + "." + extensions[i];
            max_strength = strength;
        }
    }

    return result;
}