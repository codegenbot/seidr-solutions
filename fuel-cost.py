def fuel_cost(vector):
    def calculate_fuel(amount):
        total = 0
        while amount > 2:
            amount //= 3
            total += amount - 2
        return total

    return sum(calculate_fuel(i) for i in vector)