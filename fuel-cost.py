def calculate_fuel(amount):
    if amount <= 2:
        return 0
    return amount // 3 - 2


def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)


input_str = input().replace(' ',',').split(',')
vector = [int(x) for x in input_str]
print(fuel_cost([int(x) for x in input_str]))