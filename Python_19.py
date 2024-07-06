Here's your Python code:

```Python
num_dict = {"zero": 0, "one": 1, "two": 2, "three": 3, "four": 4, "five": 5, "six": 6, "seven": 7, "eight": 8, "nine": 9}

def check(input_str):
    num_dict = {"zero": 0, "one": 1, "two": 2, "three": 3, "four": 4, "five": 5, "six": 6, "seven": 7, "eight": 8, "nine": 9}
    words = input_str.split()
    numbers = [num_dict[word] for word in words if word in num_dict]
    return sorted(numbers)

sort_numbers = lambda: input("Enter the numbers in English text format (separated by space), for example: one two three four five: ")
print(check(sort_numbers()))