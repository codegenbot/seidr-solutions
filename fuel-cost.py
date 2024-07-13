def fuel_cost():
    total = 0
    for i in range(int(input())):
        total += max(0, int(input()) // 3 - 2)
    print(total)


fuel_cost()