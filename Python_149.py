def secure_code():
    digits = input("Enter the digits separated by spaces: ")
    unique_digits = set(int(x) for x in digits.split())
    sorted_unique_digits = str(sorted(unique_digits)).replace(", ", " ")
    is_even = sum(unique_digits) % 2 == 0
    check_result = check(str(sum(unique_digits)))
    return (
        " ".join(map(str, unique_digits)) + f" Sum: {sum(unique_digits)} - {check_result}"
    )