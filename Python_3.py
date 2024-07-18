def below_zero(numbers):
    count = sum(1 for num in numbers if num < 0)
    return count


try:
    operations = [int(x) for x in input("Enter space-separated integers: ").split()]
    if len(operations) == 0:
        raise ValueError
    result = below_zero(operations)
    print(result)
except:
    print("No input provided.")