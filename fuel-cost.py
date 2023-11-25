def fuel_cost(vector):
    return sum([max(0, x//3 - 2) for x in vector])

# Read input from user
vector = []
while True:
    try:
        vector.append(int(input()))
    except EOFError:
        break

# Call the function and print the output
print(fuel_cost(vector))