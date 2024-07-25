numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
numbers = [
    float(num)
    for num in numbers_str.split()
    if (
        num.replace("-", "", 1)
        .replace(".", "")
        .replace("-", "")
        .replace(".", "")
        .isdigit()
        or not num[0] in ["-", "."]
        and num.replace("-", "").replace(".", "").isdigit()
    )
]