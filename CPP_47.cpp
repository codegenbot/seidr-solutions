// Sorting the vector
    sort(l.begin(), l.end());
    
    // Calculating the size of the vector
    int n = l.size();
    
    // Finding the median
    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    } else {
        return l[n / 2];
    }
}