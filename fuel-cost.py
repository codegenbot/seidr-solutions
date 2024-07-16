def fuel_cost(vector):
    def calculate_fuel(amount):
        return (amount // 3) - 2

    return sum(calculate_fuel(i) for i in vector)