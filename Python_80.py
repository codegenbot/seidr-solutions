```
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if set(chunk)[1] == 'p':
            return True
        elif set(chunk)[1] == 'h':
            return True
        else: 
            return False