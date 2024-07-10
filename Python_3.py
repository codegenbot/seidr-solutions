def below_zero(operations):
    count = 0
    for num in operations:
        if num < 0:
            count += 1
    return count

operations = list(map(int, input("Enter the list of numbers separated by spaces: ").strip().split()))
result = below_zero(operations)
print(result)