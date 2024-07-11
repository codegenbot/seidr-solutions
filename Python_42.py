def increment_list(l):
    return [num + 1 for num in l]

input_list = input("Enter a list of numbers separated by space: ").split()
input_list = [int(num) for num in input_list]

result = increment_list(input_list)
print(result)