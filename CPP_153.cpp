int CAP = 0, SM = 0, max_strength = INT_MIN;
string strongest_extension = "";
for (const auto& ext : extensions) {
    CAP = SM = 0;
    for (char c : ext) {
        if (isupper(c))
            CAP++;
        else if (islower(c))
            SM++;
    }
    int strength = CAP - SM;
    if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
        max_strength = strength;
        strongest_extension = ext;
    }
}
return class_name + "." + strongest_extension;
}