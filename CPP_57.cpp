bool inc = true, dec = true;
    for (int i = 1; i < l.size(); i++) {
        if (l[i] < l[i - 1])
            inc = false;
        if (l[i] > l[i - 1])
            dec = false;
    }
    return inc || dec;
}