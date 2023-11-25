def fuel_cost(arr):
    return sum((x // 3) - 2 for x in arr)


# Read the number of test cases
t = int(input())

for _ in range(t):
    # Read the vector of positive integers
    arr = list(map(int, input().split()))

    # Calculate and print the fuel cost
    print(fuel_cost(arr))