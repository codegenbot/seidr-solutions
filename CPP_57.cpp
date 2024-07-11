bool increasing = true, decreasing = true;
    for (int i = 0; i < l.size()-1; i++) {
        if (l[i] > l[i+1]) increasing = false;
        if (l[i] < l[i+1]) decreasing = false;
    }
    return increasing || decreasing;
}