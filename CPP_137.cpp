```c++
std::string compare_one(std::string str1, int num2) {
    if (num2 == 0) {
        if (str1.length() > 0)
            return "Strings are not equal";
        else
            return "Strings are equal";
    } else if (num2 > 0) {
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != 'a') {
                return "String does not contain only 'a's";
            }
        }
        return "String contains only 'a's";
    } else {
        return "Invalid input";
    }
}