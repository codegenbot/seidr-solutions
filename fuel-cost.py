Here is the solution:

def fuel_cost(input_numbers):
    total = 0
    for num in input_numbers:
        total += (num // 3) - 2
    return total