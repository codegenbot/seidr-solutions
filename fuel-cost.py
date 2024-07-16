def fuel_cost():
    vector = list(map(int, input("Enter space-separated integers: ").split()))
    if not vector:
        print("The vector is empty.")
        return 0
    return sum((num // 3) - 2 for num in vector)