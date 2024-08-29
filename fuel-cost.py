def fuel_cost(fuel):
    return sum((int(i) // 3) - 2 for i in fuel.split(','))
