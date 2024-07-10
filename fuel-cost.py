Here is the solution:

def fuel_cost():
    n = int(input())
    total_fuel_cost = 0
    for _ in range(n):
        num = int(input())
        new_num = (num // 3) - 2
        total_fuel_cost += new_num
    print(total_fuel_cost)