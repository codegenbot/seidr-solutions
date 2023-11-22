def fuel_cost():
    input_string = input()
    nums = list(map(int, input_string.split()))

    total = 0
    for num in nums:
        total += (num // 3) - 2

    return total

print(fuel_cost())