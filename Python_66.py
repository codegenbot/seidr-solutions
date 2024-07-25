```
def digitSum(s):
    total = 0
    temp = ""
    for char in s:
        if char.isdigit():
            temp += char
        else:
            if temp != "":
                while len(temp) > 1:
                    total += int(temp[0])
                    temp = temp[1:]
                if temp != "":
                    total += int(temp)
                temp = ""
    while len(temp) > 1:
        total += int(temp[0])
        temp = temp[1:]
    if temp != "":
        return int(temp)
    else:
        return 0

print(digitSum("You arE Very Smart"))