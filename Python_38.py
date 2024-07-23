```'
def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if i + 2 <= len(s):  
            if s[i] == s[i+1]:  
                j = 2
                while i+j <= len(s) and s[i] == s[i+j]:
                    j += 1
                result += s[i:i+j]
                i += j
            else: 
                if i + 1 < len(s) and s[i] == s[i+1][0]:
                    count = (len(s) - i) // 2 + 1
                    while count > 0:
                        result += s[i]
                        count -= 1
                        i += 1
                    i += (len(s) - i) % 2 or 1
                else:
                    result += s[i:]
        i += 1
    return result'