Here is the completed code:

```
def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            for i in range(1, (len(temp)//3)+1):
                if i * 3 <= len(temp):
                    result += temp[3*i-1]
                else:
                    break
            temp = ""
    return result