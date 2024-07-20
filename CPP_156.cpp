vector<string> romans{"i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix",
                              "x", "xx", "xxx", "xl", "l", "lx", "lxx", "lxxx", "xc",
                              "c", "cc", "ccc", "cd", "d", "dc", "dcc", "dccc", "cm",
                              "m", "mm", "mmm"};

        string result = "";
        int index = 0;
        while (number > 0) {
            int digit = number % 10;
            result = romans[index + digit - 1] + result;
            number /= 10;
            index += 10;
        }
        return result;
    }