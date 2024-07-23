```
def sort_third(l: list):
    result = []
    i = 0
    while i < len(l):
        if l[i] % 3 != 0:
            result.append(l[i])
        else:
            temp = [x for x in l if x % 3 == 0]
            if temp:
                last_multiple_of_three = temp[-1]
                temp.remove(last_multiple_of_three)
                result.extend(temp)
                result.append(last_multiple_of_three)
        i += 1
    return result