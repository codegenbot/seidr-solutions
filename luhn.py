Here is the solution:

def luhn(num):
    num = list(map(int, num))
    for i in range(1, len(num), 2):
        num[i] *= 2
        if num[i] > 9:
            num[i] -= 9
    return sum(num)