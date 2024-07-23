def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if i < len(s) - 1:
            if s[i] == s[i+1]:  
                result += s[i:i+2]
                i += 2
            else: 
                if len(s) - i >= 3:
                    result += s[i][0] + s[i+1:i+3][1]  
                    i += 3
                else:
                    result += s[i:]  
        i += 1
    return result