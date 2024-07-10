def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    return n - int(s.split()[2].replace("apple", "").replace("orange", "")) - 1