Here's the completed code:

```
def encode_cyclic(s: str):
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp)
    decoded_str = "".join([result[i][1:] + result[i][0] if len(result[i]) == 3 else result[i] for i in range(len(result))])
    return decoded_str