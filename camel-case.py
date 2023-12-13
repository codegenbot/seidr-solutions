s = input().split()
for i in range(len(s)):
    if '-' in s[i]:
        s[i] = s[i].replace('-', ' ').title().replace(' ', '')
print(' '.join(s))