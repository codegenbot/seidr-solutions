def sort_numbers(numbers: str) -> str:
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
    
    # Use Counter to count the occurrences of each number in the input string
    number_counts = Counter(numbers.split())
    
    # Sort the numbers by their counts and retrieve the most common occurrence for each number
    sorted_numbers = sorted((number, number_counts[number]) for number in number_map)
    
    return " ".join([str(num) for num in sorted_numbers])