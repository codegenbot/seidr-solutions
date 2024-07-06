
# This function takes a string of numbers and returns a sorted list of those numbers as strings
def sort_numbers(numbers):
    # Create a dictionary to map number words to their corresponding integer values
    number_map = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9,
    }

    # Use regular expressions to extract all numbers from the input string
    numbers = [int(number_map[num]) for num in re.findall(r"\d+", numbers)]

    # Sort the list of numbers using the built-in sorted() function
    sorted_numbers = sorted(numbers)

    # Join the sorted numbers into a single string and return it
    return " ".join([str(num) for num in sorted_numbers])