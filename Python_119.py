```
def find_max_min(lst):
    return str(min(lst)) + ' and ' + str(max(lst))

user_input = input("Enter numbers separated by space: ")
numbers = [int(num) for num in user_input.split()]
print(find_max_min(numbers))