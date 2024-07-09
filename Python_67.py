def fruit_distribution(s,n):
    s = s.split()
    for i in range(len(s)):
        if 'apples' in s[i]:
            apples = int(''.join(filter(str.isdigit, s[i-1])))
        elif 'oranges' in s[i]:
            oranges = int(''.join(filter(str.isdigit, s[i-1])))
    return n - apples - oranges