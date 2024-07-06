```
def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        temp_group = s[i:i+3]
        if i + 3 > len(s):  
            temp_group = temp_group[1:] + temp_group[:1]  
        else:
            temp_group = temp_group[2] + temp_group[0:2][::-1]  
        result += temp_group
    return result