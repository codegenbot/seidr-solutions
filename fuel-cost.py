Here is the completed code:

def fuel_cost(vector):
    return sum((i // 3 - 2) for i in vector)

# Example usage
vector = [int(x) for x in input().split()]
print(fuel_cost(vector))