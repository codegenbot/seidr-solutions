def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    total_count = int(n)  
    for i in range(len(parts)):
        words = [x for x in parts[i].split() if x.isdigit()]
        total_count += sum(int(word) for word in words)
    return n - total_count