```
def decode_cyclic(s: str):
    result = ""
    while len(s) > 2:
        for i in range(0, len(s), 3):
            if s[i+1] == 'x':
                if len(s[i+2]) < 2:
                    result += s[i]+s[i+1]+s[i+2]
                else:
                    result += s[i]+s[i+1]+s[i+2][0:2]
            elif i != len(s)-1 and s[i] == s[i+3]:
                if len(s[i+2]) < 2:
                    result += (s[i]+s[i+2])*((len(s)+2)//3)
                else:
                    result += ((s[i]+s[i+2][0:2]))*((len(s)+2)//3)
            else:
                if i == len(s)-1:
                    result += s[i]
                else:
                    if len(s[i+2]) < 2:
                        result += s[i]+s[i+1]+s[i+2]
                    else:
                        result += s[i]+s[i+1]+s[i+2][0:2]
    return result