def fuel_cost():
    n = int(input())
    total_fuel = 0
    for _ in range(n):
        num = int(input())
        new_num = (num // 3) - 2
        total_fuel += new_num
    print(total_fuel)


fuel_cost()