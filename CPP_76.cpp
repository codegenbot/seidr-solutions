if (x == 1)
    {
        return true;
    }
    
    int power = 1;
    while (pow(n, power) < x)
    {
        power++;
    }

    return pow(n, power) == x;
}