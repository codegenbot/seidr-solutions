```
num_dict = {"zero": 0, "one": 1, "two": 2, "three": 3, "four": 4, "five": 5, "six": 6, "seven": 7, "eight": 8, "nine": 9}
def sort_numbers(input_str):
    input_list = list(input_str)
    input_list.sort(key=num_dict.get)
    return "".join(input_list)

sort_numbers(input("Enter numbers: "))