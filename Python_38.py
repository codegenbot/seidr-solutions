Here is the solution:

def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if s[i] == s[-1]:
            j = i + 1
            while j < len(s) and (j % 3 != 0 or s[j-1] == s[-2]):
                j += 1
            result += s[i:j][::-1]
            i = j
        else:
            k = i
            while k < len(s) and s[k] != s[0]:
                k += 1
            if k < len(s):
                result += s[i:k+1][::-1] + s[:i]
            else:
                result += s[i:]
            break
    return result