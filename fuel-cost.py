Here is the completed code:

def fuel_cost(input_numbers):
    total = 0
    for num in map(int, input().split()):
        if num % 3 == 0:
            result = (num // 3) - 2
        else:
            result = ((num + 2) // 3) - 2
        total += result
    return str(total)