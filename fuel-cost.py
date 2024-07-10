Here is the solution:

def fuel_cost():
    n = int(input())
    total_fuel = 0
    for i in range(1, n+1):
        new_fuel = (i//3) - 2
        total_fuel += new_fuel
    print(total_fuel)