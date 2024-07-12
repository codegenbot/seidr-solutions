def secure_code(sum):
    s = input("Enter the digits separated by spaces: ")
    digits = [int(x) for x in s.split()]
    unique_digits = set(digits)
    sorted_unique_digits = str(sorted(unique_digits)).replace(", ", " ")
    is_even = sum(unique_digits) % 2 == 0
    return f"{s} Sum: {sum(unique_digits)} - {'Even' if is_even else 'Odd'}"