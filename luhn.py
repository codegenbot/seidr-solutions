```
def luhn(num):
    num = [int(x) for x in str(num).split()]
    total = sum(num[::2])
    for i in range(0,len(num)-1,2):
        temp = num[i]*2
        if temp > 9:
            total += (temp-9)
        else:
            total += temp
    return total