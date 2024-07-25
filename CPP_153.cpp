Here is the solution:

int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int uppercase_count = count_if(extension.begin(), extension.end(), ::isupper);
        int lowercase_count = extension.length() - uppercase_count;
        double strength = (double)(uppercase_count - lowercase_count);

        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}