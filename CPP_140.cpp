int i = 0;
    string result = text;
    while (i < result.size()) {
        if (result[i] == ' ') {
            int j = i + 1;
            int count_spaces = 1;
            while (j < result.size() && result[j] == ' ') {
                count_spaces++;
                j++;
            }
            if (count_spaces == 1) {
                result.replace(i, 1, "_");
                i++;
            } else if (count_spaces > 2) {
                result.replace(i, count_spaces, "-");
            } else {
                i = j;
            }
        } else {
            i++;
        }
    }
    return result;
}