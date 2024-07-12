numbers1 = [int(x) for x in input("Enter the first list of numbers separated by space: ").split()]
numbers2 = [int(x) for x in input("Enter the second list of numbers separated by space: ").split()]
print(max(numbers1 + numbers2))