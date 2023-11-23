def count_upper(s):
    count = 0
    for i in range(1, len(s), 2):
        if s[i].isupper() and s[i] in 'AEIOU':
            count += 1
    return count