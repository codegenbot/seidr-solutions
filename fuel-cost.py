def fuel_cost():
    n = int(input())
    result = 0
    for _ in range(n):
        num = int(input())
        new_num = (num // 3) - 2
        result += new_num
    return result