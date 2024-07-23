```
def decode_cyclic():
    s = input("Enter a string: ")
    n = len(s)
    
    # Handle strings with less than two characters
    if n < 2:
        return s
    
    result = ""
    i = 0
    while i < n:
        if i + 1 < n and s[i] == s[i+1]:
            j = 2
            while i + j < n and s[i] == s[i+j]:
                j += 1
            result += s[i]
            i += j
        elif i > 0 and s[i] == s[0]:
            j = 1
            while i - j >= 0 and s[i] == s[i-j]:
                j += 1
            if j > 1: 
                result += s[:j]
            else:
                result += s[0]
            break
        else:
            result += s[i]
        i += 1
    return result

print(decode_cyclic())