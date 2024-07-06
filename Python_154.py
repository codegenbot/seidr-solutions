```
def cycpattern_check(s1, s2):
    if len(s2) > len(s1)*2:
        return False
    for i in range(len(s1)):
        for j in range(i+1, len(s1)+1):
            pattern = s1[i:j]
            if (s1 + s1)[len(s2):].startswith(pattern * ((len(s2)-1)//len(pattern) + 1)) and (s1 + s1)[:len(s2)].endswith(pattern):
                return True
    return False