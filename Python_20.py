numbers = list(map(int, input("Enter the numbers (space separated): ").split()))
target_sum = int(input("Enter the target sum: "))
print(get_closest_elements(numbers, target_sum))