def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges ", " oranges").split()
    if 'apples' not in s or 'oranges' not in s:
        return None
    apples_count = 0
    oranges_count = 0
    for i, word in enumerate(s):
        if word == 'apples':
            try:
                apples_count += int(s[i+1])
            except ValueError:
                pass
        elif word == 'oranges':
            try:
                oranges_count += int(s[i+1])
            except ValueError:
                pass
    return n - apples_count - oranges_count