def sorted_list_sum(lst):
    return sum(sorted(map(lambda x: int(''.join(x.split())), lst)))

user_input = input("Enter a list of numbers separated by spaces: ")

numbers = [int(num) for num in user_input.split()]

result = sorted_list_sum(numbers)

print(f"The sum of the sorted list is: {result}")