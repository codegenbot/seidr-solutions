def secure_code():
    s = input("Enter the digits separated by spaces: ")
    digits = [int(x) for x in s.split()]
    unique_digits = set(digits)
    sorted_unique_digits = str(sorted(unique_digits)).replace(", ", " ")
    return " ".join(map(str, digits)) + f" Sum: {sum(unique_digits)} - {'Even' if sum(unique_digits) % 2 == 0 else 'Odd'}"