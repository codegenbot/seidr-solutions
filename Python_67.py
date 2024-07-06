def fruit_distribution(s,n):
    s = s.split()
    n = int(n)
    count_apples = 0
    for i in range(len(s)):
        if s[i] == 'apples' or s[i] == 'apple':
            if i > 0:
                count_apples = int(s[i-1])
    return n - count_apples