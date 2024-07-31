Here are the solutions:

```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[len(s) - 1]:
            result += s[i]
            i += 1
        else:
            j, k = 0, 0
            temp = []
            while i + k < len(s):
                temp.append(s[i+k])
                k += 1
                if temp[-1] == temp[0]:
                    result += "".join(temp)
                    i += k
                    break
    return result