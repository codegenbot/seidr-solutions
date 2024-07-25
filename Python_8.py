numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
numbers = [
    int(num)
    for num in numbers_str.split()
    if num.replace("-", "", 1).replace(".", "").isdigit()
    or num.startswith("-.")
    and num[2:].isdigit()
]