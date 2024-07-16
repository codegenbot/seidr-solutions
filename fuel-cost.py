def fuel_cost(vector):
    def calculate_fuel(amount):
        if amount <= 0:
            return 0
        else:
            amount = (amount // 3) - 2
            while amount >= 0:
                return amount + calculate_fuel(amount)

    return sum(calculate_fuel(i) for i in vector)