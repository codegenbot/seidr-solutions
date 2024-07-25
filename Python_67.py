def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    ones = int(s.count('1'))
    zeros = int(s.count('0'))
    total_count = 0
    for i in range(len(parts)):
        words = [x for x in parts[i].split() if x.isdigit()]
        total_count += sum(int(word) for word in words)
    return n - total_count - ones - zeros