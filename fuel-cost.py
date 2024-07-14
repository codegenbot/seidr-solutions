def fuel_cost(vector):
    return sum(i // 3 - 2 for i in vector)

vector = list(map(int, input("Enter the vector of positive integers (space separated): ").split()))
while any(i <= 0 for i in vector):
    print(", ".join(map(str, vector)))
    vector = list(map(int, input("Enter the vector of positive integers (space separated): ").split()))

print(sum(i // 3 - 2 for i in vector))