```
def sort_third(l: list):
    result = [0] * len(l)
    index = 0
    for i in range(len(l)):
        if i % 3 == 0:
            result[index], (result[index+1]) = l[i], sorted([x for x in l if x != l[i]])[0]
            index += 2
        elif i % 3 == 1:
            result[index] = l[i]
            index += 1
        else:
            result[index] = l[i]
            index += 1

    return result