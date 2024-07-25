def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    parts = s.split()
    count = 0
    for i in range(len(parts)):
        if 'and' not in parts[i]:
            if ''.join(filter(str.isalnum, parts[i])).replace('a', '1').replace('o', '0'):
                count += int(''.join(filter(str.isalnum, parts[i])).replace('a', '1').replace('o', '0'))
    return n - count