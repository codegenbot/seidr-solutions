for k in range(j, i-1, -1):
    if s[k] == t:
        s[i : k + 1] = list(t * (k - i))
        break
else:
    s[i : j+1] = list(t * (j - i+1))