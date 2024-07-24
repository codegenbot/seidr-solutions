```
def sort_numbers(numbers: str) -> str:
    num_dict = {k: v for k, v in zip(["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "ninety-nine"], range(1, 100))]
    sorted_numbers = sorted([num_dict[num] for num in numbers.split() if num.replace(" ", "") in num_dict])
    return " ".join(map(str, sorted_numbers))