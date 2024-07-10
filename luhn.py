def luhn(num):
    num = [int(x) for x in str(num)]
    sum = 0
    for i in range(len(num)-1, -1, -1):
        if i % 2 != len(num) % 2: 
            num[i] *= 2
            if num[i] > 9:
                num[i] -= 9
        sum += num[i]
    return sum