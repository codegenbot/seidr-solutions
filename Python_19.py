def sort_numbers(input_str: str) -> str:
    numbers = [int(num) for num in re.findall(r"\d+", input_str)]
    if not numbers:
        return "Please enter a string that contains at least one number."
    return " ".join(sorted(map(str, set(numbers))))