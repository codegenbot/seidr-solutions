```
def find_average(lst):
    average = sum(lst) / len(lst)
    return round(average)

user_input = input("Please enter a list of numbers separated by spaces: ")
lst = [float(num) for num in user_input.split()]
closest_integer = round(find_average(lst))
print(f"The closest integer to the average is {closest_integer}.")