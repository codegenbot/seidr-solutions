def fuel_cost(vector):
    def calculate_fuel(amount):
        if amount <= 0:
            return 0
        else:
            return (amount // 3) - 2 + calculate_fuel((amount // 3))

    return sum(calculate_fuel(i) for i in vector)