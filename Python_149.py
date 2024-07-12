def secure_code():
    s = input("Enter the digits separated by spaces: ")
    digits = [int(x) for x in s.split()]
    unique_digits = set(digits)
    sorted_unique_digits = str(sorted(unique_digits)).replace(", ", " ")
    sorted_list_sum = sum(unique_digits)
    is_even = sorted_list_sum % 2 == 0
    return " ".join(map(str, digits)) + f" Sum: {sorted_list_sum} - {'Even' if is_even else 'Odd'}"