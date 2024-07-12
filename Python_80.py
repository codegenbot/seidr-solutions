```
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        temp = s[i:i+3]
        if temp.count(temp[0]) != 1:
            return False
    return True