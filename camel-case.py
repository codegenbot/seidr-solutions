```
def camel_case(s):
    result = ""
    temp = s.replace("-", " ").split()
    for i in range(len(temp)):
        if i > 0:
            result += temp[i][0].upper() + temp[i][1:].lower()
        else:
            result += temp[i]
    return result