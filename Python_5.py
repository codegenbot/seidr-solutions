numbers = list(map(int, input("Enter numbers separated by space (e.g., 1 2 3): ").split()))
delimiter = input("Enter delimiter (e.g., ','): ")
result = delimiter.join(map(str, numbers))
print(result)