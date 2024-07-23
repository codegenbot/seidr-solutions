def decode_cyclic():
    s = input("Enter a string: ")
    n = len(s)
    
    if n < 2:
        return s
    
    result = ""
    i = 0
    while i < n:
        j = 1
        while i + j < n and s[i] == s[i+j]:
            j += 1
        for k in range(i, i+j):
            if k >= len(result):
                result += s[k]
            else:
                result += (j > 1)*s[k] + 'x'*(j > 1)
        i += j
    
    return result

print(decode_cyclic())