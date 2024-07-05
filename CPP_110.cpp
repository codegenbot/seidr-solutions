bool hasEvenInLst2 = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            hasEvenInLst2 = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    hasEvenInLst2 = true;
                    break;
                }
            }
            if (!hasEvenInLst2) return "NO";
        }
    }
    return "YES";
}