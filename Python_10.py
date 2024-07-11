def make_palindrome():
    s = input("Enter a string: ")
    if not s:
        return ""
    while len(s) < 2 or s[0] != s[-1]:
        s = s[-1] + s[:-1]
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            for c in set(s):
                if s.index(c) < i or s.rindex(c) > j:
                    i, j = s.index(c), s.rindex(c)
                    break
        else:
            i += 1
            j -= 1
    return s

print(make_palindrome())