string longestStr = "None";
        for (const string& str : strings) {
            if (longestStr == "None" || str.size() > longestStr.size() || (str.size() == longestStr.size() && str < longestStr)) {
                longestStr = str;
            }
        }
        return longestStr;
    }