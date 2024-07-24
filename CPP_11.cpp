string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}