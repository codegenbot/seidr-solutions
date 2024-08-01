for (const auto& str1 : a) {
        for (const auto& str2 : b) {
            if (str1.find(str2) != string::npos || str2.find(str1) != string::npos) {
                return true;
            }
        }
    }
    return false;
}