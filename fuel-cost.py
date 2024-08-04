Here is the completed code:

def fuel_cost():
    n = int(input())
    total_sum = 0
    for i in range(n):
        num = int(input())
        total_sum += ((num // 3) - 2)
    print(total_sum)