```
def fuel_cost(vector):
    return sum((x//3)-2 for x in vector)

while True:
    try:
        vector = list(map(int, filter(lambda x: int(x) > 0, input("Enter a vector of positive integers (space separated): ").split())))
        print(fuel_cost(vector))
        break
    except ValueError:
        print("Invalid input. Please enter only positive integers.")