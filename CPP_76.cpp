if (x <= 1) return false;
    double logVal = log(x) / log(n);
    return (int)logVal == logVal;
}