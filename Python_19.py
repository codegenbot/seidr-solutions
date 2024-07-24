def sort_numbers(numbers: str) -> str:
    numbers = numbers.replace("-", " ")
    words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", 
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", 
            "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", 
            "ninety"]
    words_dict = {word: i for i, word in enumerate(words)}
    sorted_numbers = sorted([words_dict[word] if word in words else int(word) for word in numbers.split()])
    return " ".join(map(str, sorted_numbers))