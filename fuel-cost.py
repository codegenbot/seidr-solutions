Here is the solution:

def fuel_cost():
    n = int(input())
    total = 0
    for i in range(n):
        num = int(input())
        new_num = math.floor(num / 3) - 2
        total += new_num
    print(total)